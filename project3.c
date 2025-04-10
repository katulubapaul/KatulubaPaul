/*
SMART HOME TEMPERATURE CONTROL SYSTEM
- Converts from celcius to fahrenheit.
- Checks comfort level.
*/

#include <stdio.h> // preprocessor directives 
#include <stdlib.h>
#include <math.h>

//Function declaration.
float convertToFahrenheit(float); // converts to fahrenheit.
float checkComfortLevel(float, float); // checks the comfort level.

// defination of convertToFahrenheit();
float convertToFahrenheit(float celcius){
float Fahrenheit = (celcius * (9/5.0)) + 32; // formular of conversion.
printf("Fahrenheit: %f", Fahrenheit);
}

//defination of checkComfortLevel()
float checkComfortLevel(float current_temp, float desired_temp){
 float temp_diff = current_temp - desired_temp;// difference between temps
 temp_diff = fabs(temp_diff); // absolute difference
 
 if (temp_diff == 0){ //  Testing conditions with if statements.
    printf("Temperature is perfect!");
 }else if (temp_diff <= 2.00){
    printf("Temperature is very comfortable!");
 }else if( temp_diff <= 5.00){
    printf("Temperature is moderately comfortable!");
 }else{
    printf("Temperature is uncomfortable!");
 }
}

int main(){ // Main function.
float UserInputCelcius; // to store celcius temp to be converted to fahrenheit.
int choice; // this to store users choice number.

printf("SMART HOME TEMPERATURE SYSTEM.\n");
printf("1. Convert to fahrenheit.\n");
printf("2. Check comfort level.\n");
scanf("%d", &choice);

switch(choice){
case 1:
    // This converts celcius to fahrenheit.
    printf("Enter the temperature you want to convert:\n");
    scanf("%f", &UserInputCelcius);
    convertToFahrenheit(UserInputCelcius);
    break;

case 2:
    // This checks the comfort level after comparing two temperatures.
    float current_temp;
    float desired_temp;

    printf("Enter the current temperature:\n");
    scanf("%f", &current_temp);
    printf("Enter the desired temperature:\n");
    scanf("%f", &desired_temp);

    checkComfortLevel(current_temp, desired_temp);
    break;

default:
printf("Enter the right choice please!");

}
}

