#include <iostream>
#include <string>
using namespace std;

void merge_div(int input[] , int si, int ei){
    if(si >= ei){
        return;
    }
    int mid = (si + ei)/2;
    merge_div(input , si , mid);
    merge_div(input , mid+1 , ei);

    int temp[ei - si +1];
    int i = 0;
    int j = mid+1;
    int k = 0;
    for(;i <= mid && j <= ei;k++){
        if(input[i] <= input[j]){
            temp[k] = input[i];
            i++;
        }
        else{
            temp[k] = input[j];
            j++;
        }
    }
    while(i <= mid) {
        temp[k] = input[i];
        k++;
        i++;
    }
    while(j <= ei) {
        temp[k] = input[j];
        k++;
        j++;
    }

    for (int i = 0, j = 0;i < (ei - si)+1 ; i++ , j++){
        input[i] = temp[j];
    }
}

void mergeSort(int input[], int size){
    int si = 0;
    int ei = size-1;
    int mid = (si + ei)/2;
    merge_div(input , si , ei);
}

int main() {
    int n;
    cin>>n;
    int input[n];
    for(int i = 0; i < n; i++){
        cin>>input[i];
    }
    mergeSort(input,n);
    for(int i = 0; i < n; i++){
        cout<<input[i]<<" ";
    }
}
