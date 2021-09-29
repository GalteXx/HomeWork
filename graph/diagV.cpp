#include <iostream>
void diagV(int n)
{
	int mass[n];
	for(int i = 0; i < n; i++)
	{
		std::cin >> mass[i];
	} 
	for(int i = 0; i < n; i++)
	{
		rectFull(i * 15, maxi(mass, n) + 25 - mass[i], (i + 1) * 15, maxi(mass, n) + 25);
	}
}
