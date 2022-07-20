#include<iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
   int l = INT_MIN;
   int s = INT_MIN;
   for(int i = 0; i < n; i++)
   {
       if(input[i] == l)
       {
           continue;
       }
       else if(input[i] > l)
       {
           s = l;
           l = input[i];
       }
       else if(input[i] > s)
       {
           s = input[i];
       }
   }
   return s;
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
        cout<<findSecondLargest(arr,n);
    }
}
