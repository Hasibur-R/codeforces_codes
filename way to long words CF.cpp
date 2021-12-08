#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    string a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n; i++){
        int c=0;
        if(a[i].length()<=10) cout<<a[i]<<"\n";
        else if(a[i].length()>10){
            for(j=1; j<a[i].length()-1; j++){
               c=c+1;
            }
            cout<<a[i].at(0)<<c<<a[i].back()<<"\n";
        }
    }
    return 0;
}
