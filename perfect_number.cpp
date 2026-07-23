#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter vlaue of n here: ";
    cin>>n;

    int sum = 0;
    for(int i =1; i<=n/2; i++){
        if(n%i == 0){
            sum += 1;
        }
    }

    if(sum==n){
        cout<<"perfect number "<<endl;
    }
    else{
        cout<<"not perfect number";
    }
    return 0;
}