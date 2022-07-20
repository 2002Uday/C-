#include<iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    int i = 0;
    int j = i+1;
    int temp;
    while(j < size)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i = i+2;
        j = j+2;
    }
    for(int i = 0; i < size ; i++){
        cout<<arr[i];
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
        swapAlternate(arr,n);
    }
}
