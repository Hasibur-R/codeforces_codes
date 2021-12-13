#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,n1,i;
    cin>>n>>k;
    for(i=1; i<=k; i++){
        if(n%10!=0){
            n1=n-1;
        }
        else{
            n1=n/10;
        }
        n=n1;
    }
    cout<<n<<"\n";
}
