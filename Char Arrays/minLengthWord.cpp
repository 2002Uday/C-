#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void minLengthWord(char input[], char output[]){
    int min = INT_MAX;
	int count = 0;
	int i = 0;

	for(; i < input[i]; i++)
	{
        count++;
        if(input[i] == ' ')
        {
        --count;
            if(count < min)
            {
                int k = 0;
                output[k] = 0;
                for(int j = i - count ; j < i ; j++)
                {
                    output[k] = input[j];
                    k++;
                }
                min = count;
            }
            count = 0;
        }
	}
	cout<<output;

}

int main()
{
    char str1[100];
    char str2[100];
    cin.getline(str1,10000);
    minLengthWord(str1,str2);
}
