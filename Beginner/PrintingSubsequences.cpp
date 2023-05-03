#include<bits/stdc++.h>
using namespace std;
void printsubsequences(int idx,vector<int> &printarr,int *arr,int n){
if(idx==n){
    for(auto it:printarr){
        cout<<it" "<<endl;
    }
    return;
}
printarr(idx+1,printarr,arr,n);
printarr.push_back(arr[ind]);
printarr(idx+1,printarr,arr,n);
printarr.pop_back();
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> printarr;
    printsubsequences(idx,printarr,arr,n);
    return 0;
}