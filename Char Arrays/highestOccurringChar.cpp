#include <iostream>
using namespace std;

char highestOccurringChar(char input[])
{
    int frc[255] = {0};
    int j = 0;
    for(int i = 0 ; input[i] ; i++)
    {
        j = input[i];
        frc[j] = frc[j] + 1;
    }
    char ans = input[0];
    int count = frc[ans];
    j = 0;
    for(int i = 0 ; input[i] ; i++)
    {
        j = input[i];
        if(frc[j] > count)
        {
            count = frc[j];
            ans = input[i];
        }
    }
    return ans;
}
int main()
{
    char str[100];
    cin>> str;
    cout<<highestOccurringChar(str);
}
