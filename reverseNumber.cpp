#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0){
        int last=n%10;
        temp=(temp*10)+last;
        n/=10;
    }
    cout<<"Reversed of number is: "<<temp;
}