/*
Program that will take two numbers X and Y as inputs, then calculate and print the values
of their addition, subtraction, multiplication, division (quotient and reminder).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num1, num2;
    cin>>num1>>num2;

    double addition, subtraction, multiplication, quotient, remainder;
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    quotient = num1 / num2;
    //remainder = num1 % num2;

    cout<<"Addition : "<<addition<<endl;
    cout<<"Subtraction : "<<subtraction<<endl;
    cout<<"Multiplication : "<<multiplication<<endl;
    cout<<"Quotient : "<<quotient<<endl;
    cout<<"Remainder : "<<remainder<<endl;

    return 0;
}