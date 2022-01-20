#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >>t;
    
    while(t--){
        int n,i,j;
        cin>> n;
        
        int a[3][3];
        
        for(i=0; i<3; i++){
            for(j=0; j<3; ++j){
                cin >> a[i][j];
            }
        }
        
        int s1 = a[0][1] + a[0][2] + a[1][2];
        int s2 = a[1][0] + a[2][0] + a[2][1];
    
        
        if(a[0][0] == n && a[1][1] == n && a[2][2] == n){
            cout << "0" <<endl;
        }
        else {
            cout << max(s1,s2) <<endl;
        }
    }
    return 0;
}
