// Classwork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "WesleyClass.h"
#include "Jake.h"
#include "myClass1.h"
using namespace std;



int main()
{
	int first = 0;
	int second = 0;
	float woo = 0;
	float mult = 0;
	for (int i = 0; i < 3; i++); {
		cout << "what is the first number ";
		cin >> first;
		cout << "\n what is the second number ";
		cin >> second;
		WesleyClass obj1;
		WesleyClass obj2(first, second);
		myClass1 in1, in2(first, second);
		Jake ob1, ob2(first, second);
		ob2.divide();
		woo = obj2.subract();
		if (woo == 0) {
			cout << "the answer is a negative\n";
		}
		else
		{
			cout << "the answer to the subract is " << woo << endl;
		}
		mult = in2.multiplty();
		cout << "the answer to the multply is " << mult << endl;
	}
    return 0;
}

