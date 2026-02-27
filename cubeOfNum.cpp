#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cube=1;
    cout<<"Enter a number for 1 to n cube: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cube=i*i*i;
        cout<<cube<<" ";
    }
}