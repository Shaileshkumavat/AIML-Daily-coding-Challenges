#include<iostream>
using namespace std;

int isprime(int n){
    if(n<=1) return false;
    
    for(int i=2; i<n; i++){
        if(n%i==0)return false;// time complexity is O(n)
    }
    return true;
}

void prime(int n){
    
}
int main(){
    int n;
    cout<<"enter the number here:";
    cin>>n;
    if(isprime(n)){
        cout<<n<<" is prime number";
    }
    else{
        cout<<n<<" is not prime";
    }
    return 0;
}