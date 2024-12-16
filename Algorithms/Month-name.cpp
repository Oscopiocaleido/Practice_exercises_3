/*
Make an algorithm that receives as input a number between 1 and 12 and prints the name of the corresponding month. 
Take into account possible erroneous values in the input
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the month number"<<endl;cin>>n;
    cout<<endl;

    if(n>12){
        cout<<"No more than 12 months";
    }
    if(n<1){
        cout<<"There are no negative months, and there is no month 0";
    }

    switch(n){
        case 1: cout<<"January";break;
        case 2: cout<<"February";break;
        case 3: cout<<"March";break;
        case 4: cout<<"April";break;
        case 5: cout<<"May";break;
        case 6: cout<<"June";break;
        case 7: cout<<"July";break;
        case 8: cout<<"August";break;
        case 9: cout<<"September";break;
        case 10: cout<<"October";break;
        case 11: cout<<"November";break;
        case 12: cout<<"December";break;
    }

    return 0;
}