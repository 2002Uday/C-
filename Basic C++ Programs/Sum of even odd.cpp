#include<iostream>
using namespace std;
int main()
{
    int n;
    int E = 0;
    int O = 0;
    int a;
    int b;
    cin >>n;
    for(int i = 1;i <= n+(i-1); i++)
    {
        a = n/10;
        b = n%10;
        n = a;
        if(b % 2 == 0)
        {
            E = E + b;
        }
        else
        {
            O = O + b;
        }
    }
    cout<<E << endl;
    cout<<O;
}
