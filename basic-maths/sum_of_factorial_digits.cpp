#include<iostream>
using namespace std;
int factorial(int n){
int fact=1;
for(int i=1;i<=n;i++){
fact=fact*i;
}
return fact;
}
int main(){
    int sum=0,digit,n;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        digit=n%10;
        sum+=factorial(digit);
        n=n/10;
    }
    
    cout<<"sum of factorial of digits=" <<sum<<endl;
    return 0;
}