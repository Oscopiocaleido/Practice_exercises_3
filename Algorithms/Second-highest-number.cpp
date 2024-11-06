/*
 Make an algorithm that takes 2 different numbers as input and prints the second number may
*/

#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;

    if(n1<n2){
        cout<<n1<<" is the second largest of the two larger numbers "<<endl;
    }else{
        cout<<n2<<" is the second largest of the two larger numbers "<<endl;
    }
    return 0;
}