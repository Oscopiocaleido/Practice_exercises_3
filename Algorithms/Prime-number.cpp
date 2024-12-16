/*
Make an algorithm that takes as input a number less than 100 and
determine if it is prime (remember that a number N is prime if its only divisors are 1 and N).
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number less than 100"<<endl;cin>>n;
    
    if(n>100){
        cout<<"The number cannot exceed 100";
    }

    if((n/n==1)&&(n/1==n)){
        cout<<"The number is prime";
    }else{
        cout<<"The number is not prime";
    }
    return 0;
}