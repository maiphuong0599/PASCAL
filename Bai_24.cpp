// tinh dien tich tam giac
#include<iostream>
#include<math.h>
using namespace std;

void Nhapcanhtamgiac(double &a, double &b, double &c)
{
	cout<<" Nha a,b,c = ";
	cin>>a>>b>>c;
}

bool KTtamgiac(double a, double b, double c)
{
	if(a+b>c && a+c>b && b+c>a)
		return 1;
	else
		return 0;
}

int Dientichtamgiac(double a, double b, double c)
{
	double s,p;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

int main()
{ 
	double a,b,c;
	Nhapcanhtamgiac(a,b,c);
	if(KTtamgiac(a,b,c))
		cout<<"Dien tich tam giac la: "<<Dientichtamgiac(a,b,c);
	else
		cout<<"Khong phai tam giac. ";
	return 0;
}
