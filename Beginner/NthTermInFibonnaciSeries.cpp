#include<bits/stdc++.h>
using namespace std;
int fibonacciTerm(int n){
    if(n<=1){
        return n;
    }
    return (n-1)+(n-2);
    }

int main(){
    int n;
    cin>>n;
    fibonacciTerm(n);
}