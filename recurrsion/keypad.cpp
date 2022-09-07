#include <iostream>
#include <string>
using namespace std;

int helper(int num,string output[],string keypad[]){
    if(num==0){
        output[0]="";
        return 1;
    }
    int temp=num/10;
	string s[10000];
    int smallans=helper(temp,s,keypad);
    int e=0;
    for(int i=0;i<smallans;i++)
    {
        for(int j=0;j<keypad[num%10].length();j++){
            output[e]= s[i]+keypad[num%10][j];
            e++;
        }
    }
    return e;
}
int keypad(int num, string output[]){
    string ouput="";
    string keypad[]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int ans=helper(num,output,keypad);
    return ans;
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
