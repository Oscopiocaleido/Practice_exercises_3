/*
 Create an algorithm that takes as input the exact time (hours, minutes, seconds and AM/PM) 
 and indicates the number of seconds elapsed during that day.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int h, m, s, sh, sm, seconds_elapsed;
    string ampm;
    cout << "Enter the time (hours): "<<endl;
    cin>>h;

    cout<<"Enter the time (minutes): "<<endl;
    cin>>m;

    cout<<"Enter the time (seconds): "<<endl;
    cin>>s;

    cout<<"Enter the time (AM/PM): "<<endl;
    cin>>ampm;

    if (ampm == "AM") {
        if (h == 12) h = 0; // 12 AM es 0 horas
    } else if (ampm == "PM") {
        if (h != 12) h += 12; // Sumar 12 horas si no es 12 PM
    }

    sh = h * 3600;
    sm = m * 60;
    seconds_elapsed = s + sm + sh;

    cout << "Seconds elapsed since midnight: " << seconds_elapsed << endl;
    
    return 0;
}