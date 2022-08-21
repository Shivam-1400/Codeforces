#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<2;
        }
        if(n%3==0){
            cout<<n/3;
        }
        else if(n%2==0 && n<3){
            cout<<n/2;
        }
        else if(n>3 && n%3==1){
            int c= n/3+ 1;
            cout<<c;
        }
        else if(n>3){
            int c= n/3+ (n%3)/2;
            cout<<c;
        }
        cout<<endl;

    }
}