#include<iostream>
using namespace std;
 
class Person
{
public:
	string name; //姓名
protected:
	string sex;  //性别
private:
	int age;    //年龄
};
 
//1.public继承
class Student1 :public Person
{
public:
	void test() {
		name = "hello world";
		sex = "male";
		//age=10;  age不可访问
	}
	int weight;//体重
protected:
	int height;//身高
private:
	int eye;//视力
 
};
//2.protected继承
class Student2 :protected Person
{
public:
	void test() {
		name = "hello world";
		sex = "male";
		//age=10;  age不可访问
	}
	int weight;//体重
protected:
	int height;//身高
private:
	int eye;//视力
 
};
//3.private继承
class Student3 :private Person
{
public:
	void test() {
		name = "hello world";
		sex = "male";
		//age=10;  age不可访问
	}
	int weight;//体重
protected:
	int height;//身高
private:
	int eye;//视力
 
};
 
void test()
{
	Person p;
	p.name;
	p.sex;
	p.age;
 
	Student1 s1;
	Student2 s2;
	Student3 s3;
 
	s1.name;
	s1.weight;
	s1.height;
	s1.eye;
 
	s2.name;
	s2.weight;
	s2.height;
	s2.eye;
 
	s3.name;
	s3.weight;
	s3.height;
	s3.eye;
}
