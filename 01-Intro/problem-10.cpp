/*
Program that will declare a variable from each data type: long int, long long int, long double,
short int. Then it will initialize them with values and print them.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int longInt = 2147483647;
    long long int maxLongInt = 9223372036854775807;
    long double longDouble = 1.1E+4932;
    short int shortInt = 32767;

    cout<<"The long int value: "<<longInt<<endl;
    cout<<"The long long int value: "<<maxLongInt<<endl;
    cout<<"The long double value: "<<longDouble<<endl;
    cout<<"The short int value: "<<shortInt;

    return 0;
}