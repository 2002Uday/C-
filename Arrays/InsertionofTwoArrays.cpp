#include<iostream>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i = 0 ; i < size1 ; i++)
    {
        for(int j = 0; j < size2 ; j++)
        {
            if(input1[i] == input1[i-1])
            {
                j++;
            }
            if(input1[i] == input2[j])
            {
                cout<<input1[i] <<" ";
                break;
            }
        }
    }
}
int main()
{
    int t;
    cin>> t;
    int n1;
    int n2;
    for(int i = 1; i <= t; i++)
    {
        cin>>n1;
        int input1[n1];
        for(int j = 0; j < n1; j++)
        {
            cin>> input1[j];
        }
        cin>>n2;
        int input2[n2];
        for(int j = 0; j < n2; j++)
        {
            cin>> input2[j];
        }
        intersection(input1,input2,n1,n2);
    }
}
