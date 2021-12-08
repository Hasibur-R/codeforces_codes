#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,c=0;
    cin>>a;
    char n[a];
    for(i=0; i<a; i++){
        cin>>n[i];
    }

    for(i=0; i<a; i++){
        if(n[i]==n[i+1]) c=c+1;
    }

    cout<<c<<"\n";
}
