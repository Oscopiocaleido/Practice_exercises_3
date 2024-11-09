/*
Given two values V1, V2 that form a closed interval, and a value X, 
make an algorithm to determine whether X is inside or outside the interval.
*/

#include <iostream>

using namespace std;

int main(){
    int li, ls, n, aux;

    cout<<"Enter the lower limit of the interval: "<<endl;
    cin>>li;

    cout<<"Enter the upper limit of the interval: "<<endl;
    cin>>ls;

    cout<<"Enter the value within the range: "<<endl;
    cin>>n;

    if (li>ls){
        aux=li;
        li=ls;
        ls=aux;
    }

    if((n>=li)&&(n<=ls)){
        cout<<n<<" belongs to the interval["<<li<<","<<ls<<"]"<<endl;
    }else{
        cout<<n<<" does not belong to the interval["<<li<<","<<ls<<"]"<<endl;
    }
    return 0;
}