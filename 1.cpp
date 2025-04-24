//sum of array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,9,8,7,6};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
     cout<<sum;
    return 0;
}