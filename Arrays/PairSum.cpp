#include<iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
	int sum = 0;
	for(int i = 0; i < size-1 ; i++)
    {
        for(int j = i+1 ; j < size ; j++)
        {
            if(input[i]+input[j] == x)
            {
                sum++;
            }
        }
    }
    return sum;
}
int main()
{
    int t;
    cout<<"Enter Numbers of Test Cases: ";
    cin>> t;
    int n;
    int x;
    for(int i = 1; i <= t; i++)
    {
        cout<<"Enter Size of Array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter Numbers of Element: ";
        for(int j = 0; j < n; j++)
        {
            cin>> arr[j];
        }
        cout<<"Enter Target: ";
        cin>>x ;
        cout<<"Number of Pairs:";
        cout<<pairSum(arr,n,x);
    }
}
