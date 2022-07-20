#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int rem;
    int ans = 0;
    int P = 1;
    for(; n != 0;)
    {
        rem = n%2;
        n = n / 2;
        ans = ans + (rem * P);
        P = P * 10;
    }
    cout<< ans;
}
