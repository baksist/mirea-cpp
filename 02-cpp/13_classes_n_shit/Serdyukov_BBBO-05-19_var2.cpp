//72 mod 10 = 2 => variant 2
#include "iostream"

using namespace std;

class P
{
	private:
			float x;
			void print_x();
			void set_x();
			void multiply_x();
	protected:
			static float y;
			void print_y();
			void add_to_y();
	public:
			float *ptr_x = &this->x;
			float *ptr_y = &this->y;
			void print_xy();
			void call_private_funcs();
			void call_protected_funcs();
};

float P::y = 0;

void P::print_x()
{
	cout << "private: print_x()" << endl;
	cout << "x = " << x << endl;
}

void P::set_x()
{
	cout << "private: set_x()" << endl;
	int input;
	cout << "Enter x: ";
	cin >> input;
	x = input;
}

void P::multiply_x()
{
	cout << "private: multiply_x()" << endl;
	int multiplier;
	cout << "Enter an integer number to multiply x by: ";
	cin >> multiplier;
	x *= multiplier;
}

void P::print_y()
{
	cout << "protected: print_y()" << endl;
	cout << "y = " << y << endl;
}

void P::add_to_y()
{
	cout << "protected: add_to_y" << endl;
	float addend;
	cout << "Enter a number to add to y: ";
	cin >> addend;
	y += addend;
}

void P::print_xy()
{
	cout << "x = " << x << ", y = " << y << endl;
}

void P::call_private_funcs()
{
	cout << "Calling private functions..." << endl << endl;
	this->print_x();
	cout << endl;
	this->set_x();
	cout << endl;
	this->multiply_x();
	cout << endl;
	cout << "All private functions were successfully called and executed!" << endl;
}

void P::call_protected_funcs()
{
	cout << "Calling protected functions..." << endl << endl;
	this->print_y();
	cout << endl;
	this->add_to_y();
	cout << endl;
	cout << "All protected functions were successfully called and executed!" << endl;
}

int main()
{
	P obj;
	*(obj.ptr_x) = 1;
	*(obj.ptr_y) = 2.14;
	obj.print_xy();
	cout << endl;
	obj.call_private_funcs();
	cout << endl;
	obj.call_protected_funcs();
	cout << endl;
	obj.print_xy();
	return 0;
}
