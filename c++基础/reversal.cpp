#include <iostream>
using namespace std;
 
int main()
{
	int a[10];
	int* p = a;
	int i = 0;
	cout << "input:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> *(p+i);
	}
 
	cout << "before:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
    p = a;             //确保指针p指向数组a的首地址
 
	int* q = p + ((sizeof(a) / sizeof(a[0])) - 1);   //指针指向数组a的最后一位地址
	while (p < q)
	{
		int t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
	p = a;            //确保指针p指向数组a的首地址
 
	cout << "now:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << *(p + i) << " ";
	}
 
	return 0;
}
 
 