#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void findCombination(int idx,int target,vector<int> &arr, vector<vector<int>>&ans, vector<int> ds){
        if(idx==target){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findCombination(idx, target-arr[idx],arr,ans,ds);
            ds.pop_back();
        }
        findCombination(idx+1,target,arr,ans,ds);
    }

public:
vector<vector<int>> combinationSum(vector<int>&candidates,int target){
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0,target,candidates,ans,ds);
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    combinationSum(arr,target);
    return 0;
}