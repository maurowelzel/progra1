// menu con funcioneess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "stdlib.h"

using namespace std;
float area_cuadrado(float l);
void potencia (float x, int y , float &a);
int mcd (int a , int b);
void main()
{   int opcion, a ,b,y,r3;
float l,x,z,r1,r2;
system ("color 9a");
do {
	   cout<<"-----------  MENU ------------"<<endl;
	   cout<<"1.-Area del cuadrado"<<endl;
	   cout<<"2.-Calcular la potencia"<<endl;
	   cout<<"3.-Minimo comun divisor "<<endl;
	   cout<<" 0.- Salir"<<endl;
	   cin>> opcion;
	   switch (opcion)
		  
	   { case 1: { 
		   cout<<"Ingrese lado:";
		   cin>> l;
		   r1= area_cuadrado(l);
		   cout<<"el area del cuadrado es:"<<r1<<endl;
		   break;}
	   case 2 : {
		   cout<<"ingrese un numero:";
			   cin>>x;
		   cout<<"ingrese un exponente:";
			   cin>>y;
			   potencia (x,y,r2);
		   cout<<"el resultado de la potencia :"<<r2<<endl;
			   break;} 
	   case 3: {
		   cout<<"ingrese numero:";
		   cin>> a;
		   cout<<"ingrese un segundo numero:";
		   cin>>b;
		   r3=mcd(a,b);
		   cout<<"el mcd de los numero es:"<<r3<<endl;
		   break;}
	   case 0: {
		   cout<<"salir"<<endl;
		   break;}
	   default: {
		   cout<<"opcion invalidad,degite otro numero:"<<endl;
		   break;}
	   getch();
	   }
}while (opcion!=0);
getch();
 system("cls");
}
float area_cuadrado (float l)
{
	float r1;
	r1=l*l;
	return (r1);}
int mcd (int a , int b) 
{
	if(a>b) swap (a,b);
	return (b==0) ? a :mcd (a,a/b);
}
void potencia(float x,int y,float&z)
{
	z=1;
	for(int i=1;i<=y;i++)
		z=z+x;
	getch();


}


