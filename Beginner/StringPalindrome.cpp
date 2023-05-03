#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int left=0,right=s.length()-1;
    while(left<right){
        if(!isalnum(s[left]))
        left++;
        if(!isalnum(s[right]))
        right--;
        else if(tolower(s[left])!=tolower(s[right]))
        return false;
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    bool ans=isPalindrome(str);
    if(ans==true){
        cout<<"Is Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}