#include<iostream>
#include<climits>
using namespace std;

void wavePrint(int input[][100], int nRows, int mCols)
{
    int j = 0;
    for(int i = 0; i < mCols ; i++)
    {
        if(j == 0)
        {
            for(; j < nRows ; j++)
            {
                cout<<input[j][i]<<" ";
            }
        }
        else
        {
            for(int k = j-1; k >= 0;  k--)
            {
                cout<<input[k][i]<<" ";
            }
            j = 0;
        }
    }
}
int main()
{
    int t;
    int a[100][100];
    int r,c;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
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
        wavePrint(a,r,c);
        cout<<endl;
    }
}
