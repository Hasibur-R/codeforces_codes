#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int i,c1=0,c2=0;
    for(i=0; i<a.length(); i++){
        if(a[i]>='a' && a[i]<='z'){
                c1=c1+1;
                }
        else if(a[i]>='A' && a[i]<='Z'){
                c2=c2+1;
                }
    }
    if(c1==c2){
        transform(a.begin(),a.end(),a.begin(), ::tolower);
    }
    else if(c1>c2>0){
       transform(a.begin(),a.end(),a.begin(), ::tolower);
    }
    else if(c2>c1>0){
        transform(a.begin(),a.end(),a.begin(), ::toupper);
    }

    cout<<a<<endl;

}
