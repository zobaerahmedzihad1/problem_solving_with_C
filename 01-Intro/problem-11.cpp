/*
Program that will declare a variable from each data type: unsigned int, unsigned long int,
unsigned long long int, unsigned short int. Then it will initialize them with values and print
them.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int num1 = 4294967295;
    unsigned long int num2 = 4294967295;
    unsigned long long int num3 = 18446744073709551615;
    unsigned short int num4 = 18446744073709551615;

    cout<<"The unsigned int value : "<<num1<<endl;
    cout<<"The unsigned long int value : "<<num2<<endl;
    cout<<"The unsigned long long int value :"<<num3<<endl;
    cout<<"The unsigned short int value : "<<num4;

    return 0;
}