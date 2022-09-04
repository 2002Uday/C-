#include<iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int start = 0;
    int end = n-1;
    int mid;
    while(start <= end)
    {
        mid = (start+end)/2;
        if(input[mid] == val)
        {
            return mid;
        }
        else if(input[mid] < val)
        {
            start = mid+1;
        }
        else if(input[mid] > val)
        {
            end = mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int j = 0; j < n; j++)
    {
        cin>> arr[j];
    }
    int t;
    int v;
    cin>> t;
    for(int i = 1; i <= t; i++)
    {
        cin>>v;
        cout<<binarySearch(arr,n,v);
    }
}
