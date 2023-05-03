#include<bits/stdc++.h>
using namespace std;
void printsubsequences(int idx,vector<int> &printarr, int s,int sum, int *arr,int n){
    if(idx>=n){
        if(s==sum){
            for(auto it:printarr){
            cout<<it" "<<endl;
            }
        }
        return;
    }
    printarr.push_back(arr[idx]);
    s+=arr[idx];
    printsubsequences(idx+1,printarr,s,sum,arr,n);
    s-=arr[ind];
    printarr.pop_back();
    printsubsequences(idx+1,printarr,s,sum,arr,n);
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
    vector<int> printarr;
    printsubsequences(0,printarr,0,sum,arr,n);
            return 0;
}