#include <iostream>
#include <string>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    if(input[0] == 0){
        return;
    }
    replaceCharacter(input+1 , c1 , c2);
    if(input[0] == c1){
        input[0] = c2;
    }
}

int main() {
    char input[100];
    cin>> input;
    char c1, c2;
    cin>>c1;
    cin>>c2;
    replaceCharacter(input,c1,c2);
    cout<<input;
}
