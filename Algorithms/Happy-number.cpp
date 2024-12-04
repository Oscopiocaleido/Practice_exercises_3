/*
A 4-digit number is happy if the first two digits are greater than the last two digits. 
For example 5612 is happy because 56 is greater than 12. A 4-digit number is increasing if each digit is greater than the previous digit.
For example 1569 is increasing because 9 > 6 > 5 > 1. 
Any number that is happy and increasing is said to be a very happy number. 
Any number that is neither happy nor increasing is said to be unhappy. 
Make an algorithm that takes as input a 4-digit number and prints the type of number found, according to the described classification.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, d1, d2, d3, d4, aux1, aux2;
    bool a=false, a1=false;
    cout<<"Enter a 4-digit number: ";
    cin>> n;
    cout<<endl;

    aux1=n/100;
    aux2=n%100;

    if(aux1>aux2)
       a=true;
    
    d1= n/1000;
    n %= 1000;

    d2= n/100;
    n %= 100;

    d3= n/10;
    d4= n%10;

    if((d1<d2)&&(d2<d3)&&(d3<d4))
       a1=true;

    if((a==true)&&(a1==true)){
        cout<<"The number is very happy";
    }else if((a==true)){
        cout<<"The number is happy";
    }else if((a1==true)){
        cout<<"The number is increasing";
    }
    else if((a==false)&&(a1==false)){
        cout<<"The number is unhappy";
    }

    return 0;
}