#include "stdafx.h"
#include "myClass1.h"
#include <iostream>


myClass1::myClass1()
{
}

myClass1::myClass1(int a, int b)
{
	in1 = a;
	in2 = b;
}

myClass1::~myClass1()
{
}

 
int myClass1::multiplty()
{
	int temp;
	temp = in1*in2;
	return temp;
}

 //wesley
