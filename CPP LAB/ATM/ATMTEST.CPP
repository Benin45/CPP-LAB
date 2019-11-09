#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>


class ATM{

public:
int id[3],pin[3],pinread,idread,temp;
int balance[3],attempt[3],deposit,withdraw,id_incr,pin_incr,rep_num;


//WELCOME SCREEN


void printIntroMenu(){
// WRITE CODE HERE
		    char select;
restart:
		    cout<<"\nl -> Login\nc -> Create New Account\nq -> Quit\n>";
		    cin>>select;
		    switch(select){
		    case 'l':
		    case 'L':
		    login();
		    break;

		    case 'c':
		    case 'C':
		    createAccount();
		    break;

		    case 'q':
		    case 'Q':
		    cout<<"\nQuitting the program";
		    delay(1000);
		    exit(0);
		    break;

		    default:
		    cout<<"Error! No such option is found. Please try again!\n";
		    delay(2500);
		    goto restart;


		    }


}

void printMainMenu(){
// WRITE CODE HERE

char select;
cout<<"\nd -> Deposit Money\nw -> Withdraw Money\nr -> Request Balance\nq -> Quit\n>";
cin>>select;

switch(select){
case 'd':
case 'D':
cout<<endl<<"How much money do you need to deposit? (Currently, you have Rs "<<balance[temp]<<" in your account.)\n>Rs ";
cin>>deposit;
balance[temp]=balance[temp]+deposit;
cout<<"Rs "<<deposit<<" deposited successfully!\n";
printMainMenu();
break;

case 'w':
case 'W':
cout<<endl<<"How much money do you need for withdrawal? (Currently, you have Rs "<<balance[temp]<<" in your account.)\n>Rs ";
cin>>withdraw;
if(withdraw>balance[temp]){
cout<<"\nThe system cannot complete the task as\nthe given withdrawal amount is greater than your existing balance.";
delay(1000);
clrscr();
printMainMenu();
}
else{
balance[temp]=balance[temp]-withdraw;
cout<<"Rs "<<withdraw<<" withdrawn successfully!\n";
delay(1000);
clrscr();
printMainMenu();
}

break;
case 'r':
case 'R':
cout<<"\nCurrently, you have Rs "<<balance[temp]<<" in your account.";
delay(1000);
clrscr();
printMainMenu();
break;

case 'q':
case 'Q':
cout<<"\nQuitting the program";
	delay(1000);
	exit(0);
break;

default:
cout<<"\nInput Error! No such option was given. Please try again next time.";
delay(1000);
clrscr();
printMainMenu();
break;
}


}





void start(){
// EXPLANATION OF CODE THAT GOES HERE IS BELOW
for (int i=0;i<40;i++){
	balance[i]=0;
	attempt[i]=0;
     }

pin_incr=0;
id_incr=0;

cout<<"Hi! Welcome to General Bank's ATM Machine!\nPlease select an option from the menu below:\n"<<endl;

printIntroMenu();
}
void createAccount(){
//ACCOUNT CREATION
if(rep_num>2){
	cout<<"\nAccount creation limit reached, The system can't create anymore accounts. Going back to the Opening menu.";
	delay(1000);
	printIntroMenu();

}
       f:	   cout<<"Enter your new id: ";
	   for(rep_num=id_incr;rep_num<id_incr+1;rep_num++){

		   cin>>id[rep_num];
		   if(id[rep_num]>1000 && id[rep_num] <9999)
		   goto y;
		   else {
		   cout<<"Sorry, maximum 4 digits only";
		   delay(1000);
		   goto f;
		   }
	   }
   y:   id_incr++;
      cout<<"Enter your new PIN: ";
for(rep_num=pin_incr;rep_num<pin_incr+1;rep_num++){

		   cin>>pin[rep_num];
	   }
      pin_incr++;
      cout<<"\nAccount creation successful!, Returning to the main menu.";
      delay(1000);
printIntroMenu();

}

void login(){
//LOGIN

      cout<<"Please enter your id :";
      cin>>idread;
      cout<<"Please enter your PIN :";
      cin>>pinread;
		  for(int i=0;i<3;i++){

		  if(idread==id[i]){
		  if(attempt[i]>3){
		  cout<<"\nYou have attempted incorrect PIN 4 times.";
		  cout<<"\nYour account has been locked for 7 days for security.";
		  cout<<"\nSorry for the inconvenience.\n Now quitting the program.";
		  delay(5000);
		  exit(0);
		  }

		if(pinread==pin[i]){

		cout<<"\nACCESS GRANTED!\nWelcome User ID "<<id[i];

		temp=i;

		printMainMenu();


		 }

		 else{
		 attempt[i]++;
		 cout<<"\n********LOGIN FAILED!********\n Going Back......";
		 delay(1000);

		 printIntroMenu();
		 }

}

	   if(i==2){
	   i++;
	   if(i==3){
	   cout<<"\nNo such user was found in the database. Please create new account to begin banking \n";
	   delay(2500);
	   printIntroMenu();
	   }

	   }



		}


}





};





int main()
{
clrscr();

//TO WRITE A WELCOME MESSAGE HERE
//call the function start
ATM M; //Object M created
M.start();

getch();
return 0;
}