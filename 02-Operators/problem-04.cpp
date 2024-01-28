/*
Program that will increment and decrement a number X by 1 inside the printf function.
(Use ++ and - - operators)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;

    // int a = x++;
    // int b = ++x;
    // int c = x--;
    // int d = --x;

    cout<<"X++ : "<<x++<<endl;
    cout<<"++X : "<<++x<<endl;
    cout<<"X-- : "<<x--<<endl;
    cout<<"--X: "<<--x<<endl;

    // cout<<"X++ : "<<a<<endl;
    // cout<<"++X : "<<b<<endl;
    // cout<<"X-- : "<<c<<endl;
    // cout<<"--X: "<<d<<endl;
    return 0;
}