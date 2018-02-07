#include "stdafx.h"
#include "WesleyClass.h"
#include <iostream>
#include <fstream>
using namespace std;



WesleyClass::WesleyClass(int a,int b) {
	firstNum = a;
	secondNum = b;
}


int WesleyClass::subract()
{
	int temp;
	temp = firstNum - secondNum;
	if (temp < 0) return 0;
	else		  return temp;
}

WesleyClass::WesleyClass()
{
}


WesleyClass::~WesleyClass()
{
}
