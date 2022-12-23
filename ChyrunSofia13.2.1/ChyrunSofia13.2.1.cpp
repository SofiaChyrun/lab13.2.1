// ChyrunSofia13.2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_13_2.cpp
// < Чирун Софія >
// Лабораторна робота № 13.2.1
// Директиви препроцесора
// Варіант 18

#include<iostream>
#include<cmath>
using namespace std;

#define MAX(y,z) ((y)>(z))?(y):(z) 
#define MIN(y,z) ((y)<(z))?(y):(z) 
#define SQR(x) (x)*(x)
#define SQR3(x) (x)*(x)*(x)
#define PRINTI(w)  printf(#w"=%f\n",w) 
#define ABSS(x) abs(x)
#define PRINTR(w) printf (#w"=%f\n",(float)w)

double minmax(double x, double y, int z);

int main()
{
	double x, y, w;
	int z;
	cout << "x ="; cin >> x; cout << endl;
	cout << "y ="; cin >> y; cout << endl;
	cout << "z ="; cin >> z; cout << endl;
	w = minmax(x, y, z);
	PRINTR(w);
	return 0;
}

double minmax(double x, double y, int z) {
	double w;
#if z <=10  	
	w = MIN(ABSS(x - z), ABSS(x + z));
#else 			
	w = MAX(SQR3(x), SQR((x + y)));
#endif
	return w;
}
