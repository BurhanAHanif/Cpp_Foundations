/*
Your hero has made the seemingly impossible journey to Torlynn -- defeating abberations of all kinds. Most notably, a fearsome giant along the swamps of the Drake River.
 It was evident that many hopeful adventurers had been there before to slay the beast
  in an attempt to obtain whatever it was guarding, and failed.
  Your Hero's unparalleled strength and wit allowed them to defeat the giant,
   and in doing so discovered the giant was guarding a piece of parchment with some strange symbol scribbled on it.

As your Hero enters the town of Torlynn they are greeted by the current burgomaster, Gustovan.
 News has travelled of your Hero's gallantry, and the Burgomaster is humbled to finally meet your Hero.
  After exchanging greetings, your Hero is compelled to ask the Burgomaster if he knows anything about the symbol they found.
   Your Hero rummages through their knapsack to find the piece of parchment but cannot seem to locate it. The Burgomaster asks you Hero to draw the symbol as they remember it.
    Your goal is to draw the symbol you obtained from the giant so that your Hero can show the Burgomaster
*/

/*
Homework 3: The Arcane Symbol

Write a complete C++ program that does the following:

1. It asks the user to enter a positive odd integer 7 < n < 30. If the value is incorrect, the program repeatedly prompts the user to input a value of n that is within the expected value.

2. The program prints three diagrams: a large asterisk, plus sign, and left pointing arrow.

*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter a Positive odd integer between 7 and 30 not including 7 and 30\n";
	cin >> n;
	while(n <= 7 || n >= 30 || n % 2 == 0)
	{
		cout<<"Wrong Enter the number in the given parameter\n";
		cin>>n;
	}
	for (int r = n; r >= 0; --r)
	{
		for (int c = 0; c < n; ++c)
		{
			if (r == c)
				cout << "*";
			else
				cout << " ";

				}
				cout << endl;
			}
	for (int r = n; r >= 0; --r)
	{
		for (int c = 0; c < n; ++c)
		{
			if (r == -c + n + 1)
			
				cout << "*";
			else
				cout << " ";
			
		}
		cout << endl;
	}

	cout << endl;

	for (int r = n; r > 0; --r)
	{
		for (int c = 0; c <= n; ++c)
		{
			if (r == c)
				cout << "*";
			else if( r == -c + n + 1)
				cout << "*";
			else if(r == (n/2)+1)
				cout << "*";
			else if(c == (n/2)+1)
				cout << "*";
			else
				cout <<" ";

		}
		cout << endl;
	}

cout<<endl;

// There is defiently a better way for doing this Cross problem and I would like to know it. 

 int midp=n/2;
 int lmid=midp-1;
 int rmid=midp+1;
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < n; ++c)
		{
			if ((r < lmid && c < lmid)||(r < lmid && c > rmid))
				 cout << " ";

			else if(r > 0 && r < lmid && c == midp)
				 cout<<" ";

			else if(c > 0 && r == midp && c < n-1)
				 cout<<" ";

			else if ((r > rmid && c < lmid)||(r > rmid && c > rmid))
				 cout << " ";

			else if((c == midp && r > rmid && r!= n-1))
				 cout<<" ";

			else if((c == midp && r == rmid)||(c == midp && r == lmid))
				 cout<<" ";
			
			else 
				cout << "*";

		}

				cout << endl;
	}
	
}
