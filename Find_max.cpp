#include<iostream>
using namespace std;

int max(int a,int b){
    return(a>b)?a:b;
}

int main(){
    int a,b,c;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter the value of c: ";
    cin>>c;

    int ans = max((a,b),c);
    cout<<ans;

    return 0;
}