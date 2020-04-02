#include <iostream>
#include<string>
using namespace std;
#define MAX 100;

struct student
{
	string mssv;
	string hoten;
	string loai;
	double toan;
	double ly;
	double dtb;
};

void fill_information(student& sv)
{
	rewind(stdin);
	cout << "Enter code: ";
	getline(cin, sv.mssv);
	cout << "Enter full name: ";
	getline(cin, sv.hoten);
	cout << "Enter classification: ";
	getline(cin, sv.loai);
	cout << "Enter math score: ";
	cin >> sv.toan;
	cout << "Enter physics score: ";
	cin >> sv.ly;
	cout << "Enter average score: ";
	cin >> sv.dtb;
}

void print_information(student& sv)
{
	cout << "\nCode: " << sv.mssv;
	cout << "\nFull name: " << sv.hoten;
	cout << "\nClassification: " << sv.loai;
	cout << "\nMath score: " << sv.toan;
	cout << "\nPhysics score: " << sv.ly;
	cout << "\nAverage score: " << sv.dtb << endl;
}

void fill_informs(student a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter student information " << i + 1 << endl;
		fill_information(a[i]);
	}

}

void print_informs(student a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nStudent information " << i + 1;
		print_information(a[i]);
	}

}

void permutation(student& x, student& y)
{
	student a;
	a = x;
	x = y;
	y = a;
}

void sort(student a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < (n - i); j++) {
			if (a[j - 1].dtb > a[j].dtb) 
			{
				permutation(a[j - 1], a[j]);
			}
		}
	}
}

void max_score(student a[], int n)
{
	double max = a[1].toan;
	for (int i = 1; i < n; i++)
	{
		if (max < a[i].toan)
		{
			max = a[i].toan;
		}
	}
	cout << "\nMax math score " << max << endl;
}
// count student have math score = math
void count(student a[], int n)
{
	double count = 0;
	double max = a[1].toan;
	for (int i = 1; i < n; i++)
	{
		if (a[i].toan = max)
		{
			count++;
		}
	}
	cout << "\nStudent have max score " << count << endl;
}
//average math of student list
void avg(student a[], int n)
{
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg += a[i].toan;
	}
	avg /= n;
	cout << "\nAverage math score of student list " << avg << endl;
}

int main()
{
	student a[100];
	int n;
	cout << "Enter n student which you want ";
	cin >> n;
	fill_informs(a, n);
	print_informs(a, n);
	cout << "\nStudent list after sort by incresing\n ";
	sort(a, n);
	print_informs(a, n);
	max_score(a, n);
	count(a, n);
	avg(a, n);
	return 0;
}


