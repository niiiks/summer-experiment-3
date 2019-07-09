#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, numbers[15]; 
	double smallest, largest, sum;
	sum=0;

	cout << "Enter 15 numbers: " << endl;
	
	for (x=0; x<15; x++)
	{
		cin >> numbers[x];
	}

	for(x=0; x<15; x++)
	{
		sum = sum + numbers[x];
	}

	smallest = numbers[0];
	largest = numbers[0];

	for (int i=0; i<15; i++)
	{	
		if(numbers[i] > largest)
		{
			largest = numbers[i];
		}
		if(numbers[i] < smallest)
		{
			smallest = numbers[i];
		}
	}

	cout<< "The largest integer is: "<< largest << endl;
	cout << "The smallest integer is: "<< smallest << endl;
	cout << "The sum of all numbers is: "<< sum << endl;
	cout << "The average is: " << (sum / 15) << endl;

	_getch();
	return 0;
}
