#include<iostream>
using namespace std;
int main()
{
    int n;
    float i;
    int a = 0;
    cin>> n;
    for(i = 1; i*i <= n ; i++)
    {
        a = i;
    }
    cout<<a;
}
