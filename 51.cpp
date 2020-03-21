#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;

struct Point
{
	int x,y;	
};

void Fill_point(Point& b)
{
	cout << "Enter x:  ";
	cin >> b.x;
	cout << "Enter y:  ";
	cin >> b.y;
}

void Print_point(Point b)
{
	cout << "(" << b.x << "," << b.y<<")\n";
}

double distance(Point A, Point B)
{
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

bool Check(Point A, Point B, Point C)
{
	if (   (distance(A, B) < distance(A, C) + distance(B, C))
		&& (distance(A, C) < distance(A, B) + distance(B, C))
		&& (distance(B, C) < distance(A, C) + distance(A, B)))
		return 1;
	else
		return 0;
}

double trianglearea(Point A, Point B, Point C)
{
	double p, ab, ac, bc;
	double s = 1;
	ab = distance(A, B);
	ac = distance(A, C);
	bc = distance(B, C);
	p = (ab + ac + bc) / 2;
	s = sqrt(p * (p - ab) * (p - ac) * (p - bc));
	return s;
}

void Filln_point(Point a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter point which you want add\n";
		Fill_point(a[i]);
	}
}

void Fill_n_point(Point a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter point which you want add\n";
		Fill_point(a[i]);
	}
}

void Print_n_point(Point a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " Point " << i + 1 << endl;
		Print_point(a[i]);
	}
}

void find_min(Point a[], int n, Point M)
{
	Point X;
	double dmin, d;
	dmin = distance( a[1], M);
	for (int i = 1; i < n; i++)
	{
		d = distance(a[i], M);
		if (dmin > d)
		{
			dmin = d;
			X = a[i];
		}
	}
}

int main()
{
	Point A;
	Point B;
	Point C;
	Point M;
	cout << "\nEnter point A\n";
	Fill_point(A);
	cout << "Point A ";
	Print_point(A);
	cout << "\nEnter point B\n";
	Fill_point(B);
	cout << "Point B ";
	Print_point(B);
	cout << "\nEnter point C\n";
	Fill_point(C);
	cout << "Point C ";
	Print_point(C);
	if (Check(A, B, C))
		cout << "Area of triangle: " << trianglearea(A, B, C) << endl;
	else
		cout << "No build triangle!" << endl;
	// Nhập danh sách n điểm, và điểm M. Hãy xác định điểm gần điểm M nhất.
	Point a[MAX];
	int n;
	cout << "\nEnter point M\n";
	Fill_point(M);
	cout << "Point M ";
	Print_point(M);
	cout << "\nEnter n point ";
	cin >> n;
	Filln_point(a,n);
	Print_n_point(a,n);
	X = find_min(a, n, M);
	cout << "Point closet: ";
	Print_point(X);
	return 0;
}

