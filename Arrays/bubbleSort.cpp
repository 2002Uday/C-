#include<iostream>
using namespace std;

void bubbleSort(int *input, int size)
{
    for(int i = 0; i < size;i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(input[i] > input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout<<input[i] <<" ";
    }
}
int main()
{
    int n;
    int t;
    cin>> t;
    for(int i = 1; i <= t; i++)
    {
        cin>> n;
        int arr[n];
        for(int j = 0; j < n; j++)
        {
            cin>> arr[j];
        }
        bubbleSort(arr,n);
    }
}
