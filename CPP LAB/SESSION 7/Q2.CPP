/*
Write a C++ program to find out the sum of N numbers, by defining proper class, constructor
and methods.
*/
#include <iostream.h>
#include <conio.h>
#include<dos.h>

class ACCOUNT{
int AccountNumber,AccountHolder,Balance;
public:

ACCOUNT(int acc_num,int acc_hold,int bal){
AccountNumber=acc_num;
AccountHolder=acc_hold;
Balance=bal;

}
void bank(int cred,int deb){
int Credit = cred;
int Debit = deb;
Balance = Balance + Credit;
Balance = Balance - Debit;
delay(2000);
clrscr();
cout<<endl<<"Your account number is "<<AccountNumber<<endl;
cout<<endl<<"Your account holder is "<<AccountHolder<<endl;
cout<<endl<<"Your Balance is Rs "<<Balance<<" since you credited Rs "<<Credit<<" and debited Rs "<<Debit<<endl;
}

};

int main(){
int AccountNumber,AccountHolder,Balance,Credit,Debit;
	clrscr();

	
	cout<<"Enter your Account Number : ";
	cin>>AccountNumber;
	cout<<endl<<"Enter your Account Holder : ";
	cin>>AccountHolder;
    cout<<endl<<"Enter your Balance : ";
	cin>>Balance;
	ACCOUNT trial(AccountNumber,AccountHolder,Balance);
	cout<<endl<<"Enter how much you need to credit to your account : ";
	cin>>Credit;
	cout<<endl<<"Enter how much you need to debit from your account : ";
	cin>>Debit;
	trial.bank(Credit,Debit);

	getch();
	return 0;
}