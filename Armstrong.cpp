#include<iostream>
#include<cmath>
using namespace std;

int Armstrong(int n){
    int sum = 0, digit = 0,rem;

    int temp = n;
    while(temp > 0){
        digit ++;
        temp/=10;
    }
    temp = n;
    while(temp>0){
        rem = temp%10;
        sum += pow(rem,digit);
        temp /= 10;
    }
    return sum;
}

int main(){
    int n;
    // int sum = Armstrong(n);
    cout<<"enter the number here: ";
    cin>>n;
    if(sum == n){
        cout<<Armstrong(n)<<" is an Armstrong number";
    }
    else{
        cout<<Armstrong(n)<<" is not an Armstrong number";
    }
    
}
