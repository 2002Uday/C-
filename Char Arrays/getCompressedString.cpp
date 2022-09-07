#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string getCompressedString(string input) {
   int j=0;
    string s="";
    for (int i = 0; i < input.length(); i++) {

        int count = 1;
        while (i < input.length() - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        if(count==1 )
            s+=input[i];
        else{
        	s+=input[i];
        	s+= to_string(count);
        }
    }
    return s;
}

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}
