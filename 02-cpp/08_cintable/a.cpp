#include "iostream"
#include "iomanip"
#include "limits"

#define fill(n,c) for (int i = 0; i < n; i++) cout << c;
#define fill_l() cout << f;	fill(11,f);cout << f;fill(15,f);cout << f;fill(8,f);cout << f;fill(4,f);cout << f << endl;

using namespace std;

int main()
{
	char cpu1[12], cpu2[12], cpu3[12];
	char type1, type2, type3, f;
	int freq1, freq2, freq3, ram1, ram2, ram3;
	
	cout << "Enter(1): CPU, frequency, RAM, type\n";  //Pentium-III 233 233 C
	cin.getline(cpu1,12);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> freq1;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> ram1;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> type1;
 	cin.clear(); 	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	cout << "Enter(2): CPU, frequency, RAM, type\n"; //AMD-K6 166 512 C
	cin.getline(cpu2,12);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> freq2;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> ram2;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin >> type2;		
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	
	cout << "Enter(3): CPU, frequency, RAM, type\n"; //PowerPC-620 2000 1024 R
	cin.getline(cpu3,12);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin >> freq3;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin >> ram3;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin >> type3;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	
	cout << "Enter filler symbol: ";
	cin >> f;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	
	fill(43, f);
	cout << "\n" << f << "PC Specs                                 " << f << "\n";
	cout << f;
	fill(41,f);
	cout << f << endl;
	cout << f << "CPU        " << f << "Frequency (Mgz)" << f << "Ram (MB)" << f << "Type" << f << endl;
	
	fill_l();

	cout << f << setw(11) << cpu1 << f << setw(15) << freq1 << f << setw(8) << ram1 << f << setw(4) << type1 << f << endl;
	fill_l();
	cout << f << setw(11) << cpu2 << f << setw(15) << freq2 << f << setw(8) << ram2 << f << setw(4) << type2 << f << endl;
	fill_l();
	cout << f << setw(11) << cpu3 << f << setw(15) << freq3 << f << setw(8) << ram3 << f << setw(4) << type3 << f << endl;
	fill_l();
	cout << f << "Type: C-CISC-processor, R-RISC-processor " << f << endl;
	fill(43,f);
	cout << endl;
	
	return 0;
}
