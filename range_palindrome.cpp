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

void palindrome(int min, int max){
    for(int i = min; i<= max; i++){
        if(palindrome_number(i)==i){
            cout<<i<<" ";
        }
    }
}
int main(){
    int min,max;
    cout<<"Enter the number here: ";
    cin>>min>>max;
    cout<<"palindrome numbers between "<<min<<" and "<<max<<" are: ";
    palindrome(min,max);
    return 0;
}