#include <bits/stdc++.h>
using namespace std;
 #define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k, b, s;
        cin>>n>>k>>b>>s;
        if(k*b > s){
            cout<<-1<<endl;
            continue;
        }
        ll a[n]={0};
        a[n-1]= k*b;
        
        int diff= s-a[n-1];
        if(n*(k-1)<diff){
            cout<<-1<<endl;
            continue;
        }
        // cout<<"array"<<endl;
        for(int i=n-1; i>=0; i--){
            if(diff>0){
                cout<<a[i]+k-1<<" ";
                diff= diff-k+1;
            }
        }
        cout<<endl;

        // ll sum=b;
        // for(int i=0; i<n-1; i++){
        //     a[i]=1;
        //     sum--;
        // }
        // a[n]=sum;
        // int cs=0;
        // for(int i=0; i<n; i++){
        //     cs= cs+a[i]*k+(k-1);
        // }
        // if(cs>=s){
        //     cout<<"-1"<<endl;
        // }


    }
 
return 0;
}