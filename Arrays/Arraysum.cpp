#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int a = arr[0];
    int b = arr[1];
    int c = a + b;
    for(int i = 2 ; i < n ;i++){
        c = c + arr[i];
    }
    cout<<c;
}
