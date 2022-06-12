#include<iostream>
using namespace std;

class Animal
{
	public:
		virtual void output(){
			cout << "Animal output" << endl;
		}
};

class Dog : public Animal
{
	public:
		void output(){
			cout << "Dog output" << endl;
		}
};

class Cat : public Animal
{
	public:
		void output(){
			cout << "Cat output" << endl;
		}
};

void test1(Animal &a){
	a.output();
}

void test2(Animal *a){
	a->output();
}

int main()
{
	Animal a;
	a.output();
	
	Dog d;
	test1(d);
	test2(&d);
	
	Cat c;
	test1(c);
	test2(&c);
	
	return 0;
}