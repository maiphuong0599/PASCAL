#include<iostream>
#include<math.h>
#define NMAX 100
#define MMAX 100
using namespace std;

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

int Tong(int a[][NMAX], int n)
{
	int s=0;
		for (int i = 0; i < n; i++){
		s += a[i][i];
	}
	return s;
}

bool KTdoixung(int a[MMAX][NMAX],int m, int n)
{
    if (m!=n) return 0;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (a[i][j]!=a[j][i])
                return 0;
    return 1;
}

int main()
{
    int a[MMAX][NMAX], m,n;
    cout<<"Nhap vao m n: ";
    cin>>m>>n;
    Nhapmt(a,m,n);
    Xuatmt(a,m,n);
    cout<<"Tong tren duong cheo chinh: "<<Tong(a,n);
    if(KTdoixung(a,m,n)==1)
    cout<<"\nMa tran co doi xung qua duong cheo chinh";
    else
    cout<<"\nMa tran khong doi xung qua duong cheo chinh";
}

