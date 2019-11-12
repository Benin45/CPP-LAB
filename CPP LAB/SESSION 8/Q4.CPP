/*
Write a program for a Shop to accept productid, productname, quantity 
and cost of 3 products.

Allow a customer to buy items from the shop and display his bill. Use object array.
*/

#include <iostream.h>
#include <conio.h>
#include <string.h>
class  Shop{

int quant,cost;
char prodname[90],prod_id[90];

public:
void input_data(){

cout<<"PRODUCT ID: ";
cin>>prod_id;
cout<<"ITEM NAME: ";
cin>>prodname;
cout<<"COST: ";
cin>>cost;

}

void output_data(){

cout<<"PRODUCT ID: "<<prod_id<<endl;
cout<<"ITEM NAME: "<<prodname<<endl;
cout<<"COST: "<<cost<<endl;



}

void shopping(char *item_name){

    if(strcmpi(item_name,prodname)==0){

cout<<"How many of "<<prodname<<" do you need? : ";
cin>>quant;
getch();
clrscr();

cout<<"Here's shopping receipt: \n\n";

cout<<"ITEM NAME: "<<prodname<<endl;
cout<<"PRODUCT ID: "<<prod_id<<endl;
cout<<"COST: Rs "<<cost*quant<<endl;

    }



}

};

void main(){
    clrscr();


char item[90];
Shop stuff[5];
//INPUT
cout<<"Enter the Item id, name, quantity and its cost\n";
for (int i = 0; i < 3; i++)
{  cout<<"Item No."<<i+1<<endl;
   stuff[i].input_data();
    cout<<endl;
}

cout<<"Press Enter ";
getch();
clrscr();
//OUTPUT
cout<<"The details of 3 Items are :\n\n";
for (i = 0; i < 3; i++)
{  cout<<"Item No."<<i+1<<endl;
   stuff[i].output_data();
    cout<<endl;
}
cout<<"Press Enter ";
getch();
clrscr();

//BILLING
cout<<"SHOPPING CART\n";
cout<<"Enter the name of the item you wish to buy: ";
cin>>item;
for (i = 0; i < 3; i++)
{
   stuff[i].shopping(item);

}




    getch();
}