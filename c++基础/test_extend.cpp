#include <iostream>
using namespace std;
 
class A_animal{
	public:
		void eat(){
			cout << "need eat" << endl;
		}
	protected:
		void sleep(){
			cout << "need sleep" << endl;
		}
	private:
		void stand(){
			cout << "can stand up" << endl;
		}
};
 
//这里子类B_dog可以通过公有继承、保护继承、私有继承来继承父类A_animal
class pub_B_dog : public A_animal{
	public:
		void pub_test(){
			eat();//可以访问
			sleep();//只有在派生类中利用派生类对象访问基类中protected对象
			//stand();//不能访问
		}
		void pub_bark(){
			cout << "wangwang(pub)" << endl;
		}
	protected:
		void pub_tail(){
			cout << "short tail(pub)" << endl;
		}
	private:
		void pub_hair(){
			cout << "yellow(pub)" << endl;
		}
};
class pro_B_dog : protected A_animal{
	public:
		void pro_test(){
			eat();//可以访问
			sleep();//只有在派生类中利用派生类对象访问基类中protected对象
			//stand();//不能访问
		}
		void pro_bark(){
			cout << "wangwang(pro)" << endl;
		}
	protected:
		void pro_tail(){
			cout << "short tail(pro)" << endl;
		}
	private:
		void pro_hair(){
			cout << "yellow(pro)" << endl;
		}
};
class pri_B_dog : private A_animal{
	public:
		void pri_test(){
			eat();//可以访问
			sleep();//只有在派生类中利用派生类对象访问基类中protected对象
			//stand();//不能访问
		}
		void pri_bark(){
			cout << "wangwang(pri)" << endl;
		}
	protected:
		void pri_tail(){
			cout << "short tail(pri)" << endl;
		}
	private:
		void pri_hair(){
			cout << "yellow(pri)" << endl;
		}
};
int main()
{
	pub_B_dog A;
 
	A.pub_bark();//派生类能访问基类中public成员
	A.eat();
	//A.sleep();//派生类不能访问基类中protected成员
	//A.stand();//派生类不能访问基类中private成员
	//A.pub_tail();
	//A.pub_hair();
	
	pro_B_dog B;
	B.pro_bark();
	//B.eat();
	//B.sleep();
	//B.stand();
	//B.pro_tail();
	//B.pro_hair();
	
	pri_B_dog C;
	C.pri_bark();
	//C.eat();
	//C.sleep();
	//C.stand();
	//C.pri_tail();
	//C.pri_hair();
	return 0;
}
