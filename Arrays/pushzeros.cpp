#include<iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int i = 0;
    int k = 0;
    while(i < size)
    {
        if(input[i] == 0)
        {
            i++;
        }
        else if(input[i] > 0)
        {
            int temp = input[k];
            input[k] = input[i];
            input[i] = temp;
            i++;
            k++;
        }
    }
    for(int j = 0; j < size; j++)
    {
        cout<<input[j]<<" ";
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
        pushZeroesEnd(arr,n);
    }
}
