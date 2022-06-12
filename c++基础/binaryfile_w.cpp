#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Person
{
	public:
		char P_Name[10];
		int age;
};
class Folder
{
	public:
		void test03(Person &p)
		{
			ofstream ofs;
			ofs.open("test_2.txt", ios::out );
			//ofs.write((const char *)&p,sizeof(p));
			ofs << "10" ;
			ofs.close();
		}
};


int main()
{
	Folder f;
	struct Person p = {"fuxiang",10};
	f.test03(p);
	system("pause");
	
}