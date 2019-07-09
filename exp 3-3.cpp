#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main() 
{
	char arr[999];
	int size, x;
	
	cout << "Enter characters without space." << endl;
	cin >> arr;
	
	size = strlen(arr);
	

	cout << "the array contains: "<< endl;
	for (x=0; x<=size-2; x++)
	{
	cout << arr[x] << ",";
	}
	cout<< arr[size-1]<< endl;
	cout << "The characters in reverse: " << endl;
	
	for (x=size-1; x>=0; x--)
	{
	    cout << arr[x];
	}
	
	cout << " " << endl;
	cout << "The size of the aray is: " << size << "." << endl;
	
	_getch();
	return 0;
}
