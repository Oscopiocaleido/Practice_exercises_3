/*
Write an algorithm that receives as input a date (day and month) 
of the current year and prints on the screen the number of days elapsed since January 1st.
*/

#include <iostream>

using namespace std;

int main(){
    int day, month, date, aux;
    cout<<"Enter today's date (day & month): ";
    cin>>date;

    day= date / 100;
    month= date % 100;

    switch(month){
        case 1://January
        if((day>31)||(day<=0)){
            cout<<"January has no more than 31 days and has no 0 or negative days";
        }else{
            aux = day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 2://February
        if((day>28)||(day<=0)){
                cout<<"February has no more than 28 days and has no 0 or negative days";
        }else{
            aux = 31 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 3://March
        if((day>31)||(day<=0)){
            cout<<"March has no more than 31 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 4://April
        if((day>30)||(day<=0)){
            cout<<"April has no more than 30 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 5://May
        if((day>31)){
            cout<<"May has no more than 31 days and has no 0 or negative days";
        }else{
            aux = 31+ 28 + 31 + 30 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 6://June
        if((day>30)||(day<=0)){
            cout<<"June has no more than 30 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + 30 + 31 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 7://July
        if((day>31)||(day<=0)){
            cout<<"July has no more than 31 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + 30 + 31 + 30 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;
        case 8://August
        if((day>31)||(day<=0)){
            cout<<"August has no more than 31 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 9://September
        if((day>30)||(day<=0)){
            cout<<"September has no more than 30 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 10://October
        if((day>31)||(day<=0)){
            cout<<"October has no more than 31 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        case 11://November
        if((day>30)||(day<=0)){
            cout<<"November has no more than 30 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
        break;

        default://December
        if((day>31)||(day<=0)){
            cout<<"December has no more than 31 days and has no 0 or negative days";
        }else{
            aux = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
            cout<<"From January 1 to the current date,"<<aux<<" days have elapsed. "<<endl;
        }
    }
    return 0;
}