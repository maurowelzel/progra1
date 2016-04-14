// factorial con while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
void main()

{
	int a,i,s=1;	
    do {
      cout<<"Ingrese el numero : ";
	  cin>>a;
	  i=1;
	} while(a<=0);
	i=1;
	
	while (i<=a);
	{
	s=s*i;
	i++;
	}
	cout<<"el resultado es : ";
	cout<<s;
	getch();
}

