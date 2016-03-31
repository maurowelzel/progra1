// saldo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define IVA 0.13
#define AFP 0.1271
using namespace std;
void main()


{
	int n,i;
	float sb,sn;
	cout<<"ingresar numeros de empleados :";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<"ingresar salario bruto :";
		cin>>sb;
		if (sb>=7000)
			sn=sb-(IVA+AFP)*sb;
		else 
			sn=sb-(AFP*sb);
		cout<<"el salario neto es : "<<sn <<endl;
		getch();
	}
}

