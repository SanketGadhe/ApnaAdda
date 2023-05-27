#include<iostream>
using namespace std;

int main(){

    int a,b;
    char op;
    cout<<"Enter First NO. :";
    cin>>a;
    cout<<"Enter Second No.";
    cin>>b;
    cout<<"Enter oprator (+,-,*,/,%) :";
    cin>>op;

    if(op=='+')
        cout<<"Addition is "<<a+b;
    else if(op=='-')
        cout<<"Substraction is "<<a-b;
    else if(op=='*')
        cout<<"Multiplication is "<<a*b;
    else if(op=='/')
        cout<<"Division is "<<a/b;
    else if(op=='%')
        cout<<"Modulus is "<<a%b;
    else 
        cout<<"Invalid oprator...";
    
    return 0;
}
