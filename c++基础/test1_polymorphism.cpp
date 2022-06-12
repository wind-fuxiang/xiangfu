
#include <iostream>
using namespace std;
 
class CAnimal
{
public:
    //无参构造函数
    CAnimal() {
        m_nLegs = 2;
    }
    CAnimal(int nLeg) {
        m_nLegs = nLeg;
    }
    //虚函数
    virtual void Move() {
        cout << "I can crawl or fly!" << endl;
    }
protected:
    int m_nLegs;
};
class CCat : virtual  public CAnimal
{
public:
    //无参构造函数
    CCat() {
        m_nLegs = 4;
    }
    CCat(int nLegs) {
        m_nLegs = nLegs;
    }
    virtual void Move() {
        cout << "I am a cat,I can crawl!" << endl;
    }
};
class CEagle : virtual public CAnimal
{
public:
    //无参构造函数
    CEagle() {
        m_nLegs = 2;
    }
    CEagle(int nLegs) {
        m_nLegs = nLegs;
    }
    virtual void Move() {
        cout << "I am an eagle,I can fly!" << endl;
    }
};
class COwl : public CCat, public CEagle
{
public:
    //无参构造函数
    COwl() {
        m_nLegs = 2;
    }
    COwl(int nLegs) {
        m_nLegs = nLegs;
    }
    virtual void Move() {
        cout << "I am an owl,I can also fly!" << endl;
    }
};
 
void callMove(CAnimal* pAn) {
    pAn->Move();
}
 
void TestAnimal()
{
    CAnimal animal;
    CEagle eagle;
    COwl owl;
    CCat cat;
    callMove(&animal);
    callMove(&eagle);
    callMove(&owl);
    callMove(&cat);
}
 
int main() {
    TestAnimal();
    return 0;
}


