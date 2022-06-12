#include <iostream>
#include <string>
#include <vector>
#include<deque>
#include<stack>
#include<list>
#include<set>
#include<map>
#include <algorithm>
#include <sys/time.h>
using namespace std;

#define CHEHUA 0
#define YUNYING 1
#define KAIFA 0

class work
{
public:

	string w_name;
	int w_salary;
};

//创建员工至容器中
void create_work(vector<work>& v)
{
	string name_seed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) 
	{
		work w;
		w.w_name = "员工";
		w.w_name += name_seed[i];

		w.w_salary = rand() & 10000 + 10000;
		v.push_back(w);
	}
}

//员工分组
void set_group(vector<work>& v, multimap<int, work>& m)
{
	for (vector<work>::iterator it = v.begin(); it != v.end(); it++) 
	{
		int dep_ID = rand() % 3;
		m.insert(make_pair(dep_ID, *it));		//插入到map中
	}
}


//显示员工
void show_work(vector<work>& v)
{
	for (vector<work>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名:" << (*it).w_name << " 工资:" << (*it).w_salary << endl;
	}
}

//遍历map
void show_dep(multimap <int, work>& m)
{
	cout << "----策划部----" << endl;
	multimap<int, work>::iterator pos = m.find(CHEHUA);
	int count = m.count(CHEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.w_name << " 工资:" << pos->second.w_salary << endl;
	}

	cout <<endl;
	cout << "----运营部----" << endl;
	pos = m.find(YUNYING);
	count = m.count(YUNYING);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.w_name << " 工资:" << pos->second.w_salary << endl;
	}

	cout <<endl;
	cout << "----开发部----" << endl;
	pos = m.find(KAIFA);
	count = m.count(KAIFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.w_name << " 工资:" << pos->second.w_salary << endl;
	}

}


int main()
{
	//srand()函数产生一个以当前时间开始的随机种子 
	srand((unsigned)time(NULL));
	
	//创建vector容器。
	vector<work> wok;
	
	//创建十名员工，加入容器中。
	create_work(wok);

	//员工分组
	multimap<int, work> mp;
	set_group(wok,mp);

	//显示
	show_dep(mp);

	system("pause");
	return 0;
}
