#include<iostream>
#include<climits>
using namespace std;

void spiralPrint(int input[][100], int nRows, int nCols)
{
    int RS = 0;
    int CS = 0;
    int RE = nRows;
    int CE = nCols;
    while(true)
    {
        for(int i = RS; i < CE; i++)
        {
            cout<<input[RS][i]<<" ";
        }
        RS++;
        for(int i = RS; i < RE; i++)
        {
            cout<<input[i][RE-1]<<" ";
        }
        CE--;
        for(int i = CE-1; i >= CS; i--)
        {
            cout<<input[CE][i]<<" ";
        }
        RE--;
        for(int i = RE-1; i >= RS; i--)
        {
            cout<<input[i][CS]<<" ";
        }
        CS++;
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
        spiralPrint(a,r,c);
        cout<<endl;
    }
}
