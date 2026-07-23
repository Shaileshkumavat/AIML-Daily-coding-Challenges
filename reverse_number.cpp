#include<iostream>
using namespace std;

int reversenumber(int n){
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
    cout<<"reverse number of "<<n<<" is "<<reversenumber(n);
    return 0;
}
    