// posled_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
	int now = 0, min;
	min = now;
	while (cin >> now, now != 0) {
		if (now > min){
			min = now;
		} 
	} cout << min << endl;
	system("pause>nul");
	return 0;
}

