#include<iostream>
using namespace std;

void Print2Darray(int a[][100] , int r,int c)
{
    cout<<"Your Table: "<<endl;
    for(int i = 0 ; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[100][100];
    int r,c;
    cout<<"Enter Rows And Columns: ";
    cin>>r;
    cin>>c;
    cout<<"Insert Values: ";
    for(int i = 0 ; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }

    Print2Darray(a,r,c);

    cout<<"Your Table column wise: "<<endl;
    for(int j = 0 ; j < c; j++)
    {
    int sum = 0;
        for(int i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        cout<<sum<<endl;
    }
}
