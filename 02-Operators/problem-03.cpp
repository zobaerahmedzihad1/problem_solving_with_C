/*
Program that will take two numbers (a, b) as inputs and compute the value of the equation
– (Without using math.h)

X = (3.31 * a 2 + 2.01 * b 3 ) / (7.16 * b 2 + 2.01 * a 3 )
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,x;
    cin>>a>>b;
    x = (3.31 * (a * a) + 2.01 * (b *b *b))/(7.16 * (b * b) + 2.01 * (a* a* a));
    cout<<"X = "<<x<<endl;

    return 0;
}