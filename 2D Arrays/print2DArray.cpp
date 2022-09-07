#include<iostream>
using namespace std;

void print2DArray(int input[][100], int row, int col)
{
    cout<<"Your test Table: "<<endl;
    for(int i = 0 ; i < row; i++)
    {
        for(int k = row; k > i ; k--)
        {
            for(int j = 0; j < col; j++)
            {
                cout<<input[i][j] <<" ";
            }
            cout<<endl;
        }
    }
}


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
    print2DArray(a,r,c);
}
