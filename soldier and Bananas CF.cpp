#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,i,s,s3=0;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++){
        s=k*i;
        s3=s3+s;
    }
    if(s3-n>0){
    cout<<s3-n<<"\n";
    }
    else cout<<0<<"\n";
}
