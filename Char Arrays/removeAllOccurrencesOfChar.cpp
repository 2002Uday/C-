#include<iostream>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c)
{
    int j = 0;
    for(int i = 0; input[i] ; i++)
    {
        if(input[i] != c)
        {
            input[j] = input[i];
            j++;
        }
    }
    input[j] = 0;
    cout<<input;
}

int main()
{
    char str1[100];
    cin>>str1;
    char c;
    cin>>c;
    removeAllOccurrencesOfChar(str1 ,c);
}
