#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        // int steps=n-1+m-1;
        // steps= steps+ m/2;
        // cout<<steps<<endl;
        if(n==1 && m==1){
            cout<<0<<endl;
        }
        else if(n>=m){
            int steps= n-1+ m-1;
            int st2= m-1+1;
            cout<<steps+st2<<endl;
        }
        else if(n<m){
            int steps= m-1+n-1+n-1+1;
            cout<<steps<<endl;
        }

    }
return 0;
}   