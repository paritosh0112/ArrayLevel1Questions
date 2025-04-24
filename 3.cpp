//max of Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={3,4,7,8,6,9,1,2};
    int max=arr[0];
    for(int i=1;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
     cout<<max;

    return 0;
}