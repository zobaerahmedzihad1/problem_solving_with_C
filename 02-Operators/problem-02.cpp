/*
Program that will calculate the circumference of a circle having radius r.

Area, A = 2 * Pi * r
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r, area;
    cin>>r;
    float pi = 3.1416;
    area = 2 * pi * r;

    cout<< "Area : "<<area;
    return 0;
}