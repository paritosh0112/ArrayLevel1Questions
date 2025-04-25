//Write a program to take 5 inputs in a Array and replace each element with its square.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={};
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
     arr[i]=arr[i]*arr[i];
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
