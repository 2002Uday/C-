#include<iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int i = size1;
    int j = size2;
    int k = size1;
    int carry = 0;
    int num;
    while(i >= 0)
    {
        while(j >= 0)
        {
            num = input1[i] + input2[j] + carry;
            i--;
            j--;
            carry = num/10;
            output[k] = num%10;
            k--;
        }
    }
    for(int i = 0 ; i < size1; i++)
    {
        cout<<output[i]<<" ";
    }
}
int main()
{
    int t;
    cin>> t;
    int n1;
    int n2;
    int out[n1+1];
    for(int i = 1; i <= t; i++)
    {
        cin>>n1;
        int arr1[n1];
        for(int j = 0; j < n1; j++)
        {
            cin>> arr1[j];
        }
        cin>>n2;
        int arr2[n2];
        for(int j = 0; j < n2; j++)
        {
            cin>> arr2[j];
        }
        sumOfTwoArrays(arr1,n1,arr2,n2,out);
    }
}
