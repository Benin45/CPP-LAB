/*
Using main method, input an integer below 60. Using a class called Fib generate the
Fibonacci series till this integer. Use constructor.
*/
#include <iostream.h>
#include <conio.h>
#include<dos.h>

class Fib{
int Number;
public:

Fib(int N){
Number=N;

}

// ==> Doesn't matter what you are working on


};

int main(){
int Number;
	clrscr();

	cout<<"SUM OF N NUMBER CALCULATOR"<<endl;
	cout<<"Enter any natural number : ";
	cin>>Number;
	 Fib trial(Number);
	
	 
	trial.math_process();

	getch();
	return 0;
}