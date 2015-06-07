#include <iostream>
#include <cstring>
using namespace std;

class A
{
public:
	A()
	{
		cout << "constucting A" << endl;
	}
	~A()
	{
		cout << "desstructiong A" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "constucting B" << endl;
	}
	~B()
	{
		cout << "desstructiong B" << endl;
	}
};
class C :public B
{
public:
	C()
	{
		cout << "constucting C" << endl;
	}
	~C()
	{
		cout << "desstructiong C" << endl;
	}
};

void Program_1()
{
	C c1;
}


class B1
{
public:
	B1(int i)
	{
		val1 = i;
		cout << "constructing B1 " << val1 << endl;
	}
	~B1()
	{
		cout << "deconstructing B1 " << val1 << endl;
	}
private:
	int val1;
};
class B2
{
public:
	B2(int i)
	{
		val2 = i;
		cout << "constructing B2 " << val2 << endl;
	}
	~B2()
	{
		cout << "deconstructing B2 " << val2 << endl;
	}
private:
	int val2;
};
class B3
{
public:
	B3()
	{
		cout << "constructing B2" << endl;
	}
	~B3()
	{
		cout << "deconstructing B2" << endl;
	}
};
class C1 :public B1, public B2, public B3
{
public:
	C1(int a, int b) :B1(a), B2(b){}
};

void Program_2()
{
	C1 obj(1, 2);
}

class AA
{
public:
	int nv;
	AA(int x)
	{
		nv = x;
		cout << "constructing AA " << nv << endl;
	}
	void fun()
	{
		cout << "Member of A: " << nv << endl;
	}
};

class BB1:virtual public AA
{
public:
	int nv1;
	BB1(int x, int y) :AA(y)
	{
		nv1 = x;
		cout << "constructing BB1:" << nv1 << endl;
	}
};
class BB2:virtual AA
{
public:
	int nv2;
	BB2(int x, int y) :AA(y)
	{
		nv2 = x;
		cout << "constructing BB2: " << nv2 << endl;
	}
};
class CC :public BB1, public BB2
{
public:
	CC(int x, int y, int z) :BB1(y, x), BB2(z, x), AA(x)
	{
		cout << "constructing CC " << nv << endl;
	}
};

void Program_3()
{
	CC c1(1, 2, 3);
	c1.nv = 6;
	c1.fun(); 
}

class Base1
{
public:
	Base1()
	{
		cout << "Base1" << endl;
	}
};
class Base2
{
public:
	Base2()
	{
		cout << "Base2" << endl;
	}
};
class Base3
{
public:
	Base3()
	{
		cout << "Base3" << endl;
	}
};
class Base4
{
public:
	Base4()
	{
		cout << "Base4" << endl;
	}
};
class Derived :public Base1, virtual public Base2, public Base3, virtual public Base4
{
public:
	Derived() :Base4(), Base3(), Base2(), Base1(){}
};

void Program_4()
{
	Derived aa;
}

class AAA
{
public:
	int n;
};
class BBB:public AAA{};
class CCC : public AAA{};
class DDD :public BBB, public CCC
{
	int getN()
	{
		return BBB::n;
	}
};

void Program_5()
{
	DDD d;
//	d.n = 10;
//	cout << d.n << endl;
}
int main()
{
	cout << "第一题" << endl;
	Program_1();

	cout << endl << "第二题" << endl;
	Program_2();

	cout << endl << "第三题" << endl;
	Program_3();

	cout << endl << "第四题" << endl;
	Program_4();
}