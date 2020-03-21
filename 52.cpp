#include <iostream>
#include<string>
using namespace std;

struct sinhvien
{
	string mssv;
	string hoten;
	string loai;
	double toan;
	double ly;
	double dtb;
};

void fill_information(sinhvien& sv)
{
	cout << "Enter mssv: ";
	cin >> sv.mssv;
	cout << "Enter full name: ";
	cin >> sv.hoten;
	cout << "Enter classification: ";
	cin >> sv.loai;
	cout << "Enter math score: ";
	cin >> sv.toan;
	cout << "Enetr physics score: ";
	cin >> sv.ly;
}


}