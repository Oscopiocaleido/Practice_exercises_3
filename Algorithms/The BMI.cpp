/*
The BMI results from the division of the individual's mass (in kilograms) by the square of the height (in meters). 
BMI is an indicator of a person's weight in relation to his or her height. BMI classification according to the UN WHO:
(a) Less than 16: Entry criteria.
(b) 16 to 16.9: underweight.
(c) 17 to 18.4: underweight.
(d) 18.5 to 24.9: normal weight.
(e) 25 to 29.9: overweight.
(f) 30 to 34.9: premorbid obesity.
(g) 40 to 45: morbid obesity.
(h) Greater than 45: hypermorbid obesity.
Write an algorithm that given a person's weight in pounds (1 pound = 0, 453592 kg) and height in centimeters, 
calculates his/her BMI and indicates as output the weight in kilograms, the person's BMI value and the category in which he/she was classified.
*/

#include <iostream>
using namespace std;

int main(){
    float height, weight;
    
    cout<<"Enter your weight in lbs: "<<endl;
    cin>>weight;

    cout<<"Enter your height in centimeters: "<<endl;
    cin>>height;

    float weight_lbs = weight * (1/2.2046);
    float height_m = height * (1.0/100);

    float BMI = weight_lbs / (height_m * height_m);

    if((BMI>=16)||(BMI<=16.9)){
        cout<<"You meet the underweight criteria";
    }else{
        if((BMI>=17)||(BMI<=18.4)){
            cout<<"You meet the criteria for low weight";
        }else{
            if((BMI>=18.5)||(BMI<=24.9)){
                cout<<"You meet the criteria for normal weight";
            }else{
                if((BMI>=25)||(BMI<=29.9)){
                    cout<<"You fit the criteria for overweight";
                }else{
                    if((BMI>=30)||(BMI<=34.9)){
                        cout<<"You meet the criteria for morbid obesity";
                    }else{
                        if((BMI>=40)||(BMI<=45)){
                            cout<<"You meet the criteria for hypermorbid obesity";
                       }else{
                        cout<<"You do not meet the criteria ";
                       }
                      }
                     }
                    }
                   }
                  }
    return 0;
}
