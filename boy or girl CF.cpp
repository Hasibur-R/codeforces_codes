#include <iostream>
using namespace std;
int main() {
    string a;
    int c = 1, k,i,j;
    cin >> a;
    for (i=0; i<a.size(); i++) {
        for (j=0; j<i; j++) {
            if (a[i]==a[j]) {
                k++;
            }
        }
        if(k==0) {
            c++;
        }
        k=0;
    }

    if (c%2==0) {
        cout<<"IGNORE HIM!";
    } else {
        cout<< "CHAT WITH HER!";
    }
}
