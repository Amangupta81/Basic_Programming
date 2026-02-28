#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,temp,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n!=0){
        n/=10;
        count++;
    }
    n=temp;
    while(n!=0){
        int x=n%10;
        sum+=round(pow(x,count));
        n/=10;
    }
    if(sum==temp){
        cout<<"Number "<<temp<<" is Armstrong number";
    }else{
        cout<<"Number "<<temp<<" is not Armstrong number";
    }
}