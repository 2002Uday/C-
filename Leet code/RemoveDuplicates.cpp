#include<iostream>
using namespace std;

void removeDuplicates(int *arr,int n)
{
    int k = 0, l = 0;
    for(int i = 0;i < n-1;i++)
    {
        for(int j = i+1;j < n;j++)
        {
            if(arr[i] == arr[j])
            {
                arr[j] = 0;
            }
        }
    }
    while(k < n)
    {
        if(arr[k] == 0)
        {
            k++;
        }
        else if(arr[k] > 0)
        {
            int temp = arr[l];
            arr[l] = arr[k];
            arr[k] = temp;
            k++;
            l++;
        }
    }
    for(int p = 0; p < n; p++)
    {
        if(arr[p] == 0)
        {
            break;
        }
        cout<<arr[p];
    }
}
int main()
{
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array:";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    removeDuplicates(arr,n);
}
