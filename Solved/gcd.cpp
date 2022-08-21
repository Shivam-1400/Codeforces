#include <bits/stdc++.h>
using namespace std;

int GCDapr1(int a, int b){
    if(a==0)
    return b;
    else if(b==0)
    return a;
    if(a==b)
    return a;
    if(a>b)
    return GCDapr1(a%b, b);
    else
    return GCDapr1(a, b%a);
}
int GCDapr2(int a, int b){
    if(a==0)
    return b;
    else if(b==0)
    return a;
    if(a==b)
    return a;
    if(a>b)
    return GCDapr2(a-b, b);
    else
    return GCDapr2(a, b-a);
}
int GCDItr(int a, int b){
    if(a%b==0 )
        return b;
    int m= min(a,b);
    if(b%a==0 )
        return a;
    int m= min(a,b);
    int ans=0;
    for(int i=1; i<=m/2; i++){
        if(a%i==0 && b%i==0)
            ans=i;
    }
    return ans;
}

int main(){
    cout<<GCDapr1(60, 36)<<endl;
    cout<<GCDapr2(60, 36)<<endl;
    cout<<GCDItr(12,36)<<endl;
}