/*
Write a program to create a class - Book, to keep the records of books 
available in your library. This program should have

i) Member functions to give and display the details such as book-code, title, publisher,
author and price of the books.

ii) Search function to search for a book name

Use object array to input details of 5 books.
*/

#include <iostream.h>
#include <conio.h>

class  EMPLOYEE{

int Emp_no;
char Emp_name[90],Designation[90];

public:
void getdata(){

cin>>Emp_no>>Emp_name>>Designation;

}

void display(){

cout<<"ID: "<<Emp_no<<endl<<"NAME : "<<Emp_name<<endl<<"Designation : "<<Designation<<"\n";

}

};

void main(){
    clrscr();
EMPLOYEE EMP[10];
cout<<"Enter the IDs,Names and Location of 10 Employees\n";
for (int i = 0; i < 10; i++)
{  cout<<"Employee No."<<i+1<<endl;
   EMP[i].getdata();
    cout<<endl;
}

clrscr();
cout<<"The details of 10 employees are :\n\n";

for (i = 0; i < 10; i++)
{  cout<<"Employee No."<<i+1<<endl;
   EMP[i].display();
    cout<<endl;
}




    getch();
}