#include "ihate.h"
#include <iostream>
void diagH(int n)
{
	int mass[n];
	for(int i = 0; i < n; i++)
	{
		std::cin >> mass[i];
	} 
	for(int i = 0; i < n; i++)
	{
		rectFullL(0, i * 15, mass[i], 15);
	}
}
