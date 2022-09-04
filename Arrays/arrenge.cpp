#include<iostream>
using namespace std;
void arrange(int *arr, int n)
{
    int val = 1;
    int s;
    int e;
    int OE;
    /*if(n%2 == 0){
        OE = n/2;
    }
    else{
        OE = (n/2)-1;
    }*/
    for(int i = 0; i < n-i+1; i++)
    {
        s = val;
        arr[i] = s;
        val++;
        e = val;
        arr[n-i-1] = e;
        val++;
    }
    for(int i =0; i < n; i++){
        cout<<arr[i];
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
        arrange(arr,n);
    }
}
