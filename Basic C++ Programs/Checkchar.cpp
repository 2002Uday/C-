#include<iostream>
using namespace std;
int main()
{
    char c;
    int ch = 0;
	int D = 0;
	int S = 0;
	for(; c != '$';)
    {
		c = cin.get();
		if (c >= 48 && c <= 57)
        {
            D++;
        }
        if (c >= 97 && c <= 122)
        {
            ch++;
        }
        if (c == 10 || c == 32 || c == 9)
        {
            S++;
        }
	}
	cout << ch <<" "<<D<<" "<<S <<endl;
}

