#include<iostream>
using namespace std;

int palindrome_number(int n){
//    int rem;
    int remdigit=0;
    while(n>0){
      //  rem = n%10;
        remdigit = remdigit*10 +n%10;
        n = n/10;
    }
    return remdigit;
}
int main(){
    int n;
    cout<<"Enter the number here:";
    cin>>n;
    if(n == palindrome_number(n)){
        cout<<"you Entered number"<<n<<" is palindrome number";
    }
    else{
        cout<<"you Entered number"<<n<<" is not a palindrome number";
    }
    return 0;
}