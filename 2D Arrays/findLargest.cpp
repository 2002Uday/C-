#include<iostream>
#include<climits>
using namespace std;

void findLargest(int input[][100], int nRows, int mCols)
{
    int mrow = INT_MIN;
    int mcol = INT_MIN;
    int indr = 0 , indc = 0;
    for(int i = 0 ; i < nRows; i++)
    {
        int sum = 0;
        for(int j = 0; j < mCols; j++)
        {
            sum = sum + input[i][j];
        }
        if(sum >= mrow)
        {
            mrow = sum;
            indr = i;
        }
    }
    for(int j = 0 ; j < mCols; j++)
    {
        int sum = 0;
        for(int i = 0; i < nRows; i++)
        {
            sum = sum + input[i][j];
        }
        if(sum >= mcol)
        {
            mcol = sum;
            indc = j;
        }
    }
    if(mrow >= mcol)
    {
        cout<<"row "<<indr<<" "<<mrow<<endl;
    }
    else
    {
        cout<<"column "<<indc<<" "<<mcol<<endl;
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
        findLargest(a,r,c);
    }
}
