#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    int p[q];
    int temp;
    for(int i=0;i<q;i++){
        cin>>p[i];
    }

    for(int i=0;i<q/2;i++){
        temp = p[i];
        p[i] = p[q-i-1];
        p[q-i-1] = temp;
    }

    for(int i=0;i<q;i++){
        cout<<p[i]<<" ";
    }
}