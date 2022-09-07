#include<iostream>
using namespace std;

void trimSpaces(char input[])
{
    int count = 0;
    for(int i = 0; input[i]; i++)
    {
        if(input[i] != ' ')
        {
            input[count++] = input[i];
        }
    }
    input[count] = '\0';
    cout<<input;
}

int main()
{
    char str[100];
    cin.getline(str,100);
    trimSpaces(str);
}
