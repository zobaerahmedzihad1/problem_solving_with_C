/*
Program that will define a global and a local variable with the same name but with different
values, and then do the following steps in order-
A. Print the value of the variable before defining the local variable
B. Print the value of the variable after defining the local variable
C. Explicitly print the value of the variable as global
*/
#include<bits/stdc++.h>
using namespace std;
int globalVariable = 7;
int main()
{
    cout<<"A. Global "<<globalVariable<<endl;
    {
        int globalVariable = 94;
        cout<<"B. Local "<<globalVariable<<endl;
    }
    cout<<"C. Global "<<globalVariable<<endl;
    return 0;
}