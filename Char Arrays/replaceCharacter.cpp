#include<iostream>
using namespace std;

void replaceCharacter(char input[], char c1, char c2)
{
    for(int i = 0; i < 100; i++)
    {
        if(input[i] == 0)
        {
            break;
        }
        else if(input[i] == c1)
        {
            input[i] = c2;
        }
    }
    cout<<input;
}

int main()
{
    char str[100];
    char a,b;
    cin>>str;
    cin>>a>>b;
    replaceCharacter(str,a,b);
}
