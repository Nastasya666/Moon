// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
#include <cmath>

using namespace  std;

int main() 
{
	int c, d, a;
	setlocale(0, "");
	cin >> c;
	cin >> d;
	cin >> a;
	cout << (atan(2 * c) / d + 2) / ((d - a) * (a - 1)); 
	 
}