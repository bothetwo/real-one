#include "stdafx.h"
#include "Jake.h"
#include <iostream>
#include <fstream>
using namespace std;



Jake::Jake(int a,int b) {
	firstNum = a;
	secondNum = b;
}
float Jake::divide(){
	if (secondNum == 0) {
		cout << "you cannot divide by zero\n";
	}
	else {
		answer = firstNum / secondNum;
		cout << "\nthe division answer  is " << answer << endl;
	}
	return(answer);
}



Jake::Jake()
{
}


Jake::~Jake()
{
}
