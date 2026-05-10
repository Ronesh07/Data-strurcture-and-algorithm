#include <iostream>
#include<cmath>
using namespace std;
double binary_to_decimal(string &s){
    double result=0;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        int num=ch-'0';
        result+=num*pow(2,n-i-1);
    }
    return result;
}
int main()
{
    string s;
    cout<<"enter your binary string:\n";
    cin>>s;
    cout<<"your decimal number is:\n";
    cout<<binary_to_decimal(s);
    return 0;
}