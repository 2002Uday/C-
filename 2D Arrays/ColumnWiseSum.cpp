#include<iostream>
using namespace std;


int main()
{
    int r,c;
    cin>>r;
    cin>>c;
    int a[r][c];
    for(int i = 0 ; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int j = 0 ; j < c; j++)
    {
    int sum = 0;
        for(int i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        cout<<sum<<" ";
    }
}
