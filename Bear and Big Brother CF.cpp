#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,aa,bb;
    cin>>a>>b;
        for(i=1; i>0; i++){
            aa=a*3;
            bb=b*2;
            a=aa;
            b=bb;
            if(a>b) break;
        }
    cout<<i<<"\n";

}
