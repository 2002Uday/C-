#include<iostream>
using namespace std;
int main()
{
    int n;
    int a = 0;
    int b = 1;
    int c;
    cin >> n;
    cin >>c;
    for (int i = 1; i <= n ;i++)
    {
        if(c == 1)
        {
            a = a + i;
        }
        else if(c == 2)
        {
            b = b * i ;
        }
    }
    if(c == 1)
    {
        cout<<a;
    }
    else if(c == 2)
    {
        cout<<b;
    }
    else{
        cout<<"-1";
    }
}
