#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Folder
{
	public:
		void test01()
		{
			ofstream ofs;
			ofs.open("test.txt", ios::out | ios::trunc);
			ofs << "write in" << endl;
			ofs << "fuxiang,12" << endl;
		}
		void test02()
		{
			//ifstream ifs;
			IFS.open("example.txt", ios::in);
			if(!IFS.is_open())
			{
				cout << "open error" << endl;
				return;
			}
			read_way_4(IFS);
			IFS.close();
		}
		void read_way_1(ifstream &ifs)
		{
			char buf[1024] = {0};
			while (ifs >> buf)
			{
				cout << buf << endl;
			}
			ifs.close();
		}
		void read_way_2(ifstream &ifs)
		{
			char buf[1024] = {0};
			while (ifs.getline(buf,sizeof(buf)))
			{
				cout << buf << endl;
			}
			ifs.close();
		}
		void read_way_3(ifstream &ifs)
		{
			string buf;
			while (getline(ifs,buf))
			{
				cout << buf << endl;
			}
			ifs.close();
		}
		void read_way_4(ifstream &ifs)
		{
			char c;
			while ((c = ifs.get())!=EOF)
			{
				cout << c;
			}
			ifs.close();
		}
		
private:
	ifstream IFS;
};

int main()
{
	Folder f;
	f.test01();
	f.test02();
	
	system("pause");
	return 0;
}