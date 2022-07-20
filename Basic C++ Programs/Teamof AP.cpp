#include<iostream>
using namespace std;
int main()
{
    int n;
    int a;
    int b = 1;
    cin >> n;
    for(int i=1; i <= n ; i++)
    {
        a = (3*b)+2;
        b++;
        if(a%4 == 0){
            i--;
            continue;
        }
        cout<<a<<" ";
    }
}
