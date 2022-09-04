#include <iostream>
#include <cstring>
using namespace std;



void pairStar(char input[]) {
    if(input[1] == 0){
        return;
    }
    pairStar(input+1);
    if(input[0] == input[1]){
        int l = strlen(input);
        for(int i = l ; i > 0 ; i--){
        input[i+1] = input[i];
        }
        input[1] = '*';
    }
}


int main() {
    char input[100];
    cin>> input;
    pairStar(input);
    cout<<input;
}
