/*
Program that will take an floating point number as input from the keyboard and use printf **

function to perform the followings:
(a) Print the number right justified within 10 columns
(b) Print the number to be right justified to 2 columns (Assuming the input has more
than 2 digits)
(c) Print the number rounded to two decimal places
(d) Print the number rounded to integer (without using conversion or type casting)
(e) Prints the number in exponential notation/scientific notation
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num;
    cin>>num;

    cout<<"a) Val : "<<setw(10)<<right<<num<<endl;
    cout<<"b) Val : "<<"Not done yet"<<endl;
    cout<<"c) Val : "<<setprecision(4)<<num<<endl;
    cout<<"d) Val : "<<round(num)<<endl;
     cout<<"e) Val : "<<scientific<<num<<endl;
    return 0;
}