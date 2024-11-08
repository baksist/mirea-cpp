//72 mod 14 == 2, var2
#include "iostream"

using namespace std;

class X
{
	protected:
		int* x1;
		int* x2;
	public:
		X(int n1, int n2)
		{
			x1 = new int;
			x2 = new int;
			*x1 = n1;
			*x2 = n2;
		}
		~X()
		{
			delete x1;
			delete x2;
		}
		virtual void print()
		{
			cout << "x1 = " << *x1 << "; x2 = " << *x2 << endl;
		}
		virtual void set(int n1, int n2)
		{
			*x1 = n1;
			*x2 = n2;
		}
};

class Y: public X
{
	private:
		int *y;
	public:
		Y(int n1, int n2, int n3): X(n1, n2)
		{
			y = new int;
			*y = n3;
		}
		~Y()
		{
			delete y;
		}
		void print()
		{
			cout << "y = " << *y << endl;
		}
		void set(int n)
		{
			*y = n;
		}
		void run()
		{
			int output;
			output = (*x1) * (*x2) * (*y);
			cout << output << endl;
		}
};

int main()
{
	int a, b, c;

	X* obj1;
	obj1 = new X(2, 3);
	cout << "class X:" << endl;
	cout << "Initial values: ";
	obj1->print();
	cout << "Enter new values: ";
	cin >> a;
	cin >> b;
	obj1->set(a, b);
	cout << "New values set by class method: ";
	obj1->print();
	delete obj1;
	cout << endl;

	cout << "class Y:" << endl;
	Y* obj2;
	cout << "Enter x1 and x2 values for class Y constructor: ";
	cin >> a;
	cin >> b;
	obj2 = new Y(a, b, 5);
	cout << "Initial value:" << endl;
	obj2->print();
	cout << "Enter new value: ";
	cin >> c;
	obj2->set(c);
	cout << "New value set by class method: ";
	obj2->print();
	cout << "Result of the run() method, where x1 = " << a << ", x2 = " << b << ": ";
	obj2->run();
	delete obj2;

	return 0;
}
