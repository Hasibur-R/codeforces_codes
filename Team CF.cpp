#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,p,v,t,s,c=0;
    cin>> n;
    for(i=0; i<n; i++){
     cin>>p>>v>>t;
     s=p+v+t;
     if(s>1){
        c=c+1;
        }
     }
    cout<<c<<"\n";
    return 0;
}
