#include <iostream>
#include <string>
using namespace std;

void quickSort(int input[], int start, int end){
    if(start >= end){
        return;
    }
    int count = start;
    for(int i = start; i < end+1; i++){
        if(input[i] < input[start]){
            count++;
        }
    }
    int temp = input[count];
    input[count] = input[start];
    input[start] = temp;

    int i = start;
    int j = end;
    while(i != j){
        if(input[i] < input[count]){
            i++;
        }
        if(input[j] > input[count]){
            j--;
        }
        else if(input[i] > input[count] && input[j] < input[count]){
            int temp = input[j];
            input[j] = input[i];
            input[i] = temp;
        }
    }

    quickSort(input,start,count);
    quickSort(input,count+1,end);
}
void quickSort(int input[], int size){
    quickSort(input, 0, size - 1);
}

int main() {
    int n;
    cin>>n;
    int input[n];
    for(int i = 0; i < n; i++){
        cin>>input[i];
    }
    quickSort(input,0,n-1);
    for(int i = 0; i < n; i++){
        cout<<input[i]<<" ";
    }
}
