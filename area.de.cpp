// area de.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float a,b,c,p,area;
	cin>>a;
	cin>>b;
	cin>>c;
	p=(a+b+c)/2;
	area= sqrt(p*(p-a)*(p-b)*(p-c));
	cout <<"el area es: "<<area;
	getch();
	
}

