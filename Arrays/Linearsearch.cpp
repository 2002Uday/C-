#include<iostream>
using namespace std;
int linearSearch(int *arr, int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(x == arr[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>> t;
    int n;
    int x;
    for(int i = 1; i <= t; i++)
    {
        cin>>n;
        int arr[n];
        for(int j = 0; j < n; j++)
        {
            cin>> arr[j];
        }
        cin>>x;
        cout<<linearSearch(arr , n, x);
    }
}
