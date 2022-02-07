#include<bits/stdc++.h>
#include<algorithm>

using namespace std;



int main(){
    int t;
    cin >>t;
    
    while(t--){
        int n,k,x;;
        cin>> n>>k>>x;
        
        if(x>k){
            cout<< "-1"<<endl;
        }
        else {
            int count=0;
            for(int i=0; i<n; i++){
                if(count == x)
                count = 0;
                cout << count<<" ";
                count++;
            }
            cout <<endl;
        }
    }
    return 0;
}
