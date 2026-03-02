#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,square=1;
    cout<<"Enter a number for 1 to n square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        square=i*i;
        cout<<square<<" ";
    }
}