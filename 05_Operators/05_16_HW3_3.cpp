#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cin >> a >> b;
	
	cout << (((double)a / (double)b) - (a / b)) * b << endl;
	
	return 0;
}