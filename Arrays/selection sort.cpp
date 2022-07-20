#include<iostream>
using namespace std;

void selectionsort(int *input, int n)
{
    int end = n;
    int temp;

    for(int i = 0; i < n-1; i++)
    {
        int minInd = i;
        int min = input[i];
        for(int j = i; j < n; j++)
        {
            if(input[j] < min)
            {
                min = input[j];
                minInd = j;
            }
        }
        temp = input[i];
        input[i] = input[minInd];
        input[minInd] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<input[i]<<" ";
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
        selectionsort(arr,n);
    }
}
