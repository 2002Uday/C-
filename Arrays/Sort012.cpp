#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int i;
    int j[n-1];
    int k = 0;
    int nz = 0;
    int nt = n-1;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            j[k] = arr[i];
            k++;
        }
        else if(arr[i] == 2)
        {
            j[nt] = arr[i];
            nt--;
        }
    }
    for(int u = k; u < nt+1; u++)
    {
        j[u] = 1;
    }
    for(int u = 0; u < n ;u++)
    {
        arr[u] = j[u];
    }
    for(int u = 0; u < n ;u++)
    {
        cout<<arr[u];
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
        for(int j = 0; j < n; j++)
        {
            cin>> arr[j];
        }
        sort012(arr,n);
    }
}
