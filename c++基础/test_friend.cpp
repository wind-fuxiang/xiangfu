#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A(int x = 0){
			a = x;
		}
		friend class B;
};

class B
{
	int b ;
	public:
		void fun(A& ob){
			cout << ob.a << endl;
		}
};

class C : public B
{
	public:
		//void fun2(A& ob){cout << ob.a <<endl;}
};
int main(void)
{
	A a(55);
	C c;
	c.fun(a);
}