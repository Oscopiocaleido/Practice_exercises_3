/*
Make an algorithm that prints “Capicua” if a 5-digit input number is capicua, or “Not Capicua” otherwise.
digits is capicua, or “Not capicua” otherwise. A number is capicua if it is written the same backwards and forwards. 
For example, 545 is a capicua.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int long n=0, reverse=0, aux=0, p1=0, p2=0, p3=0, p4=0, p5=0;

    cout<<"Please enter a five-digit number: "<<endl;
    cin>>n;

    aux = n;

    p1 = aux / 10000;
    aux = aux % 10000;
    p2 = aux / 1000;
    aux = aux % 1000;
    p3 = aux / 100;
    aux = aux % 100;
    p4 = aux / 10;
    p5 = aux % 10;

    reverse= (p5*10000)+(p4*1000)+(p3*100)+(p2*10)+p1;

    if(reverse == n){
        cout<<"The number "<< n <<" is capicua"<<endl;
    }else{
        cout<<"The number "<< n <<" is not capicua"<<endl;
    }
    return 0;
}