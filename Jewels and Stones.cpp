#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        int count=0;
        cin>>s1>>s2;
        for(int i=0;i<s2.size();i++){
            for(int j=0;j<s1.size();j++){
                if(s2[i]==s1[j]){
                    count=count+1;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
