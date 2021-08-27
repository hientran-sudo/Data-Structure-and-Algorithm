#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    double d;
    double e = 2.0, f = 1.0/3;
    cout<< "Please enter 2 numbers "<<endl;
    cin>>a;
    cin>>b;
    c = max(a,b);
    cout<< "Max is: "<< c << endl;
    d = pow(e,f);
    cout<< "Square root of is " << d << endl;
    cout<<fixed<<setprecision(3)<< d << endl;
    return 0;
}
