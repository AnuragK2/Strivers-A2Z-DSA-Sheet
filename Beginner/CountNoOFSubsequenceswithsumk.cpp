#include<bits/stdc++.h>
using namespace std;
int printsubsequences(int idx,int s,int sum, int *arr,int n){
    if(idx>=n){
        if(s==sum){
        return 1;
        }
        return 0;
    }
    printarr.push_back(arr[idx]);
    s+=arr[idx];
    int left=printsubsequences(idx+1,s,sum,arr,n);
    s-=arr[ind];
    printarr.pop_back();
    int right=printsubsequences(idx+1,s,sum,arr,n);
    return left+right;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<printsubsequences(0,0,sum,arr,n)<<endl;
            return 0;
}