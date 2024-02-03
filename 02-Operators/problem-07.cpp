#include<bits/stdc++.h>
using namespace std;
int main()
{
    int int_num;
    float float_num;
    
    cin>>int_num;
    cin>>float_num;
    
    int assinment_int = float_num;
    float assinment_float = int_num;
    
    cout<<"Assinment: "<<float_num <<" assigned to an int produces "<<assinment_int<<endl;
    cout<<"Assinment : "<< int_num <<" assigned to a float produces "<<assinment_float<<endl;
    
    int ty_int = int(float_num);
    float ty_float = float(int_num);
    
    cout<<"Type Casting: (float) "<< int_num<<" produces "<<ty_float<<endl;
    cout<<"Type Casting: (int) "<< float_num<<" produces "<<ty_int<<endl;
    
    return 0;
}