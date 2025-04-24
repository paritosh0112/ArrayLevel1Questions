//Given an integer array {1, 2, 3, 4, 5, 6}, multiply every alternate
// element (even indices) by 5 and print the updated array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]= {1, 2, 3, 4, 5, 6};
    for(int i=0;i<6;i=i+2){
        arr[i]=arr[i]*5;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
