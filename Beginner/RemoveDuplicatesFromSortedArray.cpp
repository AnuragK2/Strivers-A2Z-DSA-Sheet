#include<bits/stdc++.h>
using namespace std;
int removeduplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=removeduplicates(arr,n);
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}