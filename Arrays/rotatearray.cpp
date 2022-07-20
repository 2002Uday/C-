#include<iostream>
using namespace std;
/*
METHOD 1

void rotate(int *input, int d, int n)
{
    int j;
    for(int i = 0; i < d; i++)
    {
        int temp = input[0];
        for(j = 0; j < n; j++)
        {
            input[j] = input[j+1];
        }
        input[j-1] = temp;
    }
}
*/


//METHOD 2
void rotate(int *input, int d, int n)
{
    int arr[d-1];
    int j = 0;
    for(int i = 0; i < d ; i++)
    {
        arr[i] = input[i];
    }
    for(int i = 0; i < n; i++)
    {
        input[i] = input[i+d];
    }
    for(int i = (n-d); i < n; i++ )
    {
        input[i] = arr[j];
        j++;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<input[i];
    }
}
int main()
{
    int t;
    int d;
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
        cin>>d;
        rotate(arr,d,n);
    }
}
