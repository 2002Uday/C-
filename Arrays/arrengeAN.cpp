#include<iostream>
using namespace std;
void arrange(int *arr, int n)
{
    int a = 1;
    int b = n-1;
    for(int i = 0; i <= n; i++)
    {
        if(a%2 != 0)
        {
            arr[a] = i;
            a++;
        }
        else
        {
            arr[b] = i;
            b--;
        }
    }
}
int main()
{
    int t;
    cin>> t;
    int n;
    for(int i = 1; i <= t; i++)
    {
        cin>>n;
        int arr[n];
        arrange(arr,n);
    }
}
