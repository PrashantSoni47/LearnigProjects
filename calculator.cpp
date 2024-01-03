// make a Simple Calculator which perform simple arithmatic operation such as
// addition, subtraction,multiplication, division,moduls.

#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;

    char operation;
    cout<<" Which opetation you want to perform (+,-,*/ : ";
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<num1 <<"+"<<num2<<" = "<<num1+num2; 
        break;

    case '-':
        cout<<num1 <<"-"<<num2<<" = "<<num1-num2; 
        break;

    case '*':
        cout<<num1 <<"*"<<num2<<" = "<<num1*num2; 
        break;

    case '/':
        cout<<num1 <<"/"<<num2<<" = "<<num1/num2; 
        break;
    case '%':
        cout<<num1 <<"%"<<num2<<" = "<<num1%num2; 
        break;
    
    default:
        cout<<" Select vailid operation ";
    }

    
    return 0;
}