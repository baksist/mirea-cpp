#include "iostream"

using namespace std;

class A
{
	public:
		void f()
		{
			cout << "A" << endl;
		}
};

class B:public virtual A
{
	public:
		void f()
		{
			cout << "B" << endl;
		}
};

class C:public virtual A
{
	public:
		void f()
		{
			cout << "C" << endl;
		}
};

class D:public virtual A, public B
{
	public:
		void f()
		{
			cout << "D" << endl;
		}
};

class E:public C, public virtual D
{
	public:
		void f()
		{
			cout << "E" << endl;
		}
};

class F:public E, public virtual D {};

int main()
{
	F object;
	object.f();

	return 0;
}
