//Given an integer array {2, 3, 4, 5}, store the cube of each element in the same array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={2,3,4,5};
   for(int i=0;i<4;i++){
     arr[i]=arr[i]*arr[i]*arr[i];
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
