#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[7]={1,2,3,4,9,8,7};
   for(int i=0;i<7;i++){
             arr[i]=arr[i]*arr[i];
   }
   for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}