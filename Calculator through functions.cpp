#include<iostream>
using namespace std;
int number1,number2,a,b,c,d;
void input()
{
	cout<<"Enter the number 1: ";
	cin>>number1;
	cout<<"Enter the number 2: ";
	cin>>number2;
}
void calculator()
{
	a=number1+number2;
	b=number1-number2;
	c=number1*number2;
	d=number1/number2;
}
void output()
{
	cout<<"The addition of the two numbers is: "<<a<<endl;
	cout<<"The subtraction of the two numbers is: "<<b<<endl;
	cout<<"The multiplication of the two numbers is: "<<c<<endl;
	cout<<"The division of the two numbers is: "<<d<<endl;
}
main()
{
	input();
	calculator();
	output();
}