#include<iostream>
using namespace std;

bool isPermutation(char input1[], char input2[])
{
    int arr[255] = {0};
    int j = 0;
    int i = 0;
    int k = 0;
    for(; input1[j]; j++)
    {
        i = input1[j];
        arr[i] = arr[i] + 1;
    }
    j = 0;
    for(; input2[j]; j++)
    {
        k = input2[j];
        arr[k] = arr[k] - 1;
    }
    for(int p = 65 ; p < 123; p++)
    {
        if(arr[p] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str1[100];
    char str2[100];
    cin>>str1;
    cin>>str2;
    int b = isPermutation(str1,str2);
    if(b == 0)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
}
