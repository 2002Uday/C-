#include<iostream>
using namespace std;

void Substrings(char input[], int i)
{
    for(int j = i; input[j]; j++)
        {
            for(int k = i ; k <= j; k++)
            {
                cout<<input[k];
            }
            cout<<endl;
        }
}

void printSubstrings(char input[])
{
    for(int i = 0; input[i] ; i++)
    {
        Substrings(input,i);
    }
}
int main()
{
    char str[100];
    cin>>str;
    printSubstrings(str);
}
