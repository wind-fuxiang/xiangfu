
#include <iostream>
using namespace std;
 
void change(int* a, int* b);
int main()
{
	int x = 2;
	int y = 3;
	cout << "before:" << "x=" << x << " " << "y=" << y << endl;
	change(&x, &y);
	cout << "now:" << "x=" << x << " " << "y=" << y << endl;
 
	return 0;
}
 
void change(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
