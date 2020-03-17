#include<iostream>
using namespace std;
#define NMAX 100
#define MMAX 100

void Nhapmt(int a[][NMAX], int &m, int &n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
        cout << "a[" << i << "][" << j << "] = ";
		cin >> a[i][j];
      }
}

void Xuatmt(int a[][NMAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

int Tongdong(int a[][NMAX], int n, int d)
{
	int s=0;
	for (int j = 0; j < n; j++) 
		s += a[d][j];

	return s;
}

int Maxdong(int a[][NMAX], int m, int n, int d)
{
	int max=0; 
	for(int i=0 ;i<n;i++)
	{
		for(int j=0;i<m;i++){
		if(a[i][j]>max)
		{
			max=a[i][j];
			d=i;
		}
	}
	return d;
	}
}

int main()
{
	int a[100][100],m,n,d;
    cout<<"Nhap vao m n: ";
    cin>>m>>n;
    Nhapmt(a,m,n);
    Xuatmt(a,m,n);
	cout << "Nhap dong can tinh tong: ";
	cin>>d;
	cout << "Tong dong: " << Tongdong(a,n,d) << endl;
	cout<< "Dong max: "<<Maxdong(a,m,n,d);
	return 0;
}


