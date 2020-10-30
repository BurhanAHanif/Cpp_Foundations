/*
You are embarking on a quest to find the Silver Sword. Your goal is to retrieve some baseline information on your Hero.

Homework 1: A Hero in the Making

Write a complete C++ program that does the following:

1. Ask the hero to enter their name.

2. Ask the hero to enter their weight in pounds and height in inches, and store weight as a double and height as an int.

3. Ask the hero to enter their year of birth in the following format: YYYY, and store it as an int.

4. Print the hero's name.

5. Print the hero's weight in kilograms and height in meters and centimeters. Note: You must convert the weight and height previously entered. Use the division and modulo operations to calculate height
 as described, and apply the following conversions: 1 kilogram = 2.2 pounds and 1 inch = 2.54 centimeters.

6. Print the hero's Body Mass Index (BMI). Use the following formula:

BMI = weight(lbs) * 703 / height(in)^2
7. Print the hero's year of birth.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int height,YearOfBirth,H_meters;
	double weight, H_cenmeters, BMI;




	cout << "Enter Your Hero's name: \n";
	cin >> name;
	cout << "Enter his/her weight in pounds: \n";
	cin >> weight;
	cout << "Enter his/her height in inches: \n";
	cin >> height;
	BMI = weight*703 / (height * height);

	// have to add constraint on the year cannot be more then 4 digits and no negative numbers 
	
	cout << "Enter his/her year of birth: \n"; 
	cin >>YearOfBirth;
	while(YearOfBirth<=0 || YearOfBirth>2020){
		cout << "No negative values and no values greater than 2020 Enter his/her year of birth: \n"; 
		cin >>YearOfBirth;
	}
	cout<<endl;
	H_cenmeters = height*2.54;

	H_meters= H_cenmeters/100; //900/100=9 901%100=1
	H_cenmeters= H_cenmeters- H_meters*100;
	cout << "Hero :" << name <<endl;
	cout << "Weight: " << weight / 2.2 << " kilograms\n";
	//cout << "Height:" << height<<endl; 
	cout << "Height: " << H_meters<<" Meters "<< H_cenmeters<<"Centimeters"<<endl;
	//cout << "Height CM:" << H_cenmeters<<endl;
	cout << "Body Mass Index (BMI) :" << BMI<<endl;

	cout << "YOB: " << YearOfBirth<<endl;


	return 0;
}