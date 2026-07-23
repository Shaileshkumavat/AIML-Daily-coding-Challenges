#include<iostream>
using namespace std;

int IsStrong(int n){
    int sum = 0,original = n;
    int fact[n]{1,1};

    for(int i=2; i<=n; i++){
        fact[i] = i*fact[i-1];
    }

    while(n>0){
        sum += fact[n%10];
        n /= 10;
    }

    return sum == original;
}

int main(){
    int n;
    cout<<"Enter tha value of n: ";
    cin>>n;
    cout<<IsStrong(n);    
    
    return 0;
}