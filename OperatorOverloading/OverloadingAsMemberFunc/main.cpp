#include<iostream>
#include "mystring.h"

using namespace std;

int main()
{
	cout << boolalpha << endl;

	Mystring larry{ "Larry" };
	Mystring moe{ "Moe" };

	Mystring stooge = larry;
	larry.Display();
	moe.Display();

	cout << (larry == moe) << endl;
	cout << (larry == stooge) << endl;

	larry.Display();
	Mystring larry2 = -larry;
	larry2.Display();

	Mystring stooges = larry + "Moe";
	
	Mystring two_stooges = moe + " " + "Larry";
	two_stooges.Display();
	// Moe Larry
	Mystring three_stooges = moe + " " + larry + " " + "Curly";
	three_stooges.Display();                                                        //  Moe Larry Curly

	return 0;
}