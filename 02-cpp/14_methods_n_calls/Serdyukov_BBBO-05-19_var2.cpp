//72 mod 14 = 2 => variant 2
#include "iostream"
#include <math.h>

using namespace std;

class calc
{
	private:
		double x, y, z, u;
	public:
		void set(double X, double Y, double Z);
		void run();
		void print();	
};

void calc::set(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}

void calc::run()
{
	u = cbrt(8 + pow(fabs(x - y), 2) + 1)/(x*x + y*y + 2) - exp(fabs(x - y)) * pow((pow(tan(z), 2) + 1), x);
}

void calc::print()
{
	this->run();
	cout << "Given x = " << x << ", y = " << y << ", z = " << z << ", result is: " << u << endl;
}

int main()
{
	cout << "Direct init:" << endl;
	calc obj;
	obj.set(-4.5, 0.75 * pow(10, -4), 0.845 * pow(10, 2));
	(&obj)->print();
	cout << endl;

	cout << "Indirect init:" << endl;
	calc *obj_ptr = &obj;
	(*obj_ptr).set(1, 1, 1);
	obj_ptr->print();
	cout << endl;

	cout << "Dynamic memory:" << endl;
	calc *obj2 = new calc;
	obj2->set(2.2, 0.2, 20.02);
	(*obj2).print();
	delete obj2;

	return 0;
}
