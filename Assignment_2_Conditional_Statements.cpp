/*
Homework 2: The Road to Torlynn

Building upon Homework 1, write a complete C++ program that adds the following:

1. If the Hero's BMI is less than 18.5, print "Nimble" next to his/her BMI. If the Hero's BMI is 18.5 and 24.9 (inclusive), print "Athletic" next to his/her BMI. If the Hero's BMI is between 25 and 29.9 (inclusive), print "Strong" next to his/her BMI. If the Hero's BMI is greater than or equal to 30, print "Hefty" next to his/her BMI. Note: You might want to make use of else-if statements here.

2. Ask the user to enter a two-digit number less than or equal to 50, and store it as an int.

3. If the input is not a two-digit number less than or equal to 50, repeatedly ask the same question until the user enters a two-digit number less than or equal to 50.

4. Print all positive factors of the input, in ascending order, on the same line seperated by spaces. A number i is a factor of n if when you divide n by i, the remainder is 0. Each factor indicates the distance your Hero must travel per day.

5. Print the sum of all factors. This is the total distance your Hero must travel to reach Torlynn.

6. Print the total number of factors. This value represents the number of days it will take your Hero to arrive in Torlynn.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int height,YearOfBirth,H_meters,two_digit;
	double weight, H_cenmeters, BMI;




	cout << "Enter Your Hero's name: \n";
	cin >> name;
	cout << "Enter his/her weight in pounds: \n";
	cin >> weight;
	cout << "Enter his/her height in inches: \n";
	cin >> height;
	BMI = weight*703 / (height * height);

	// question 1 

	if (BMI < 18.5)
		cout <<"Body Mass Index (BMI):"<< BMI <<";"<< "Nimble \n";
		
	else if ( (BMI >= 18.5) && (BMI <= 24.9) )
		cout <<"Body Mass Index (BMI):"<< BMI <<";"<< "Atletic \n";
		
	else if ((BMI >= 25) || (BMI <=29.9))
		cout <<"Body Mass Index (BMI):"<< BMI <<";"<< " Strong \n";
	
	else if (BMI >= 30)

		cout <<"Body Mass Index (BMI):"<< BMI <<";"<< "Hefty \n";
		
	// question 2, 3
	cout <<"Enter a two Digit number less than or equal to 50 \n ";
	cin >>two_digit;
	while(two_digit > 50 || two_digit < 10)
	{
		cout << " Try again. Enter a number to continue " << two_digit << endl;
		cin >>two_digit;

	}
	// question 4 ,5 ,6
	cout<< "Distance to be travelled each day "<< endl;
	int sum = 0;
	int total = 0; 

	for (int i = 1; i <= two_digit; ++i)
	{
		if (two_digit % i == 0)
		{
			cout << i << " "; 

			sum += i; // sums factors
			total += 1; //counts number of factors

		}
		
	}
	
	cout<< "Distance to Torlynn : "<<sum<<endl;
	cout<< name << " " <<  "will arrive at Torlynn in : " << total <<" "<< "days" <<endl;

	// have to add constraint on the year cannot be more then 4 digits and no negative numbers 
	
	/*cout << "Enter his/her year of birth: \n"; 
	cin >>YearOfBirth;
	while(YearOfBirth<=0 || YearOfBirth>2020){
		cout << "No negative values and no values greater than 2020 Enter his/her year of birth: \n"; 
		cin >>YearOfBirth;
	}
	cout<<endl;
	H_cenmeters=height*2.54;

	H_meters= H_cenmeters/100; //900/100=9 901%100=1
	H_cenmeters= H_cenmeters- H_meters*100;
	cout << "Hero :" << name <<endl;
	cout << "Weight: " << weight / 2.2 << " kilograms\n";
	//cout << "Height:" << height<<endl; 
	cout << "Height: " << H_meters<<" Meters "<<H_cenmeters<<" Centimeters"<<endl;
	//cout << "Height CM:" << H_cenmeters<<endl;
	cout << "Body Mass Index (BMI) :" << BMI<<endl;

	cout << "YOB: " << YearOfBirth<<endl;
	
*/
	return 0;
		
}