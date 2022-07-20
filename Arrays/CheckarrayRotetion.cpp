#include<iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int j = 0;
    for(int i = 0; i < size; i++)
    {
        if(input[i] < input[i+1])
        {
            j++;
        }
        else if(input[i] > input[i+1])
        {
            j++;
            break;
        }
    }
    return j;
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
        cout<<arrayRotateCheck(arr,n);
    }
}
