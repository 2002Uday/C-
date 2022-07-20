#include<iostream>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<size1) {
        ans[k] = arr1[i];
        k++;
        i++;
    }
    while(j<size2) {
        ans[k] = arr2[j];
        k++;
        j++;
    }
    for (int i = 0 ; i < (size1+size2) ; i++)
    {
        cout<<ans[i] <<" ";
    }
}
int main()
{
    int n1,n2;
    int t;
    int ans[(n1+n2)-2];
    cin>> t;
    for(int i = 1; i <= t; i++)
    {
        cin>> n1;
        int arr1[n1];
        for(int j = 0; j < n1; j++)
        {
            cin>> arr1[j];
        }
        cin>> n2;
        int arr2[n2];
        for(int j = 0; j < n2; j++)
        {
            cin>> arr2[j];
        }
        merge(arr1,n1,arr2,n2,ans);
    }
}
