#include<iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    for(int i = 1; i < size ; i++)
    {
        int j;
        int current = input[i];
        for(j = i-1; j >= 0 ;j--)
        {
            if(current < input[j])
            {
                input[j+1] = input[j];
            }
            else
            {
                break;
            }
        }
        input[j+1] = current;
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
        insertionSort(arr,n);
    }
}
