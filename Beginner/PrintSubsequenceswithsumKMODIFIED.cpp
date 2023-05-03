#include<bits/stdc++.h>
using namespace std;
bool printsubsequences(int idx,vector<int> &printarr,int s,int sum,int *arr,int n){
    if(idx>=n){
        if(s==sum){
            for(auto it:printarr){
                cout<<it" "<<endl;
                return true;
            }
        }
        return false;
    }
    printarr.push_back(arr[idx]);
    s+=arr[idx];
    if(printsubsequences(idx+1,printarr,s,sum,arr,n)==true){
        return true;
    }
    s-=arr[idx];
    printarr.pop_back();
    if(printsubsequences(idx+1,printarr,s,sum,arr,n)==true){
        return true;
    }
    return false;
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