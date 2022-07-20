#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    for(int i = 0; i < size ; i++)
    {
        bool Unique = true;
        for(int j = 0 ; j < size ; j++)
        {
            if(j == i)
            {
                continue;
            }
            else if(arr[j] == arr[i])
            {
                Unique = false;
                break;
            }
        }
        if(Unique){
            return arr[i];
        }
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
        cout<<findUnique(arr,n);
    }
}
