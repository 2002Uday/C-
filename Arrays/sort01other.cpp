#include<iostream>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    int j = size;
    int temp;
    for(int i = 0; i < j; i++)
    {
        for(; j > 0 ; j--)
        {
            if(input[i] > input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout<<input[i];
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
        sortZeroesAndOne(arr,n);
    }
}
