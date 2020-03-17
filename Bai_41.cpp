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
int Dem(int a[][NMAX],int m, int n,int x)
{
    int dem=0;
    for(int i=0;i<m;i++){
    	for(int j = 0; j < n; j++)
			if(a[i][j]==x) dem++;
}
    return dem;
}

int Max(int a[][NMAX],int m, int n)
{
    int max=0;
    for(int i=0;i<m;i++) {
    	for(int j = 0; j < n; j++)
			if(a[i][j]>max) 
				max=a[i][j];
}
    return max;
}

int main(){
    int a[MMAX][NMAX],m,n,x;
 
    cout<<"Nhap vao m n: ";
    cin>>m>>n;
    Nhapmt(a,m,n);
    Xuatmt(a,m,n);
    cout<<"\nNhap phan tu can tim kiem: ";
    cin>>x;
    cout<<"So lan xuat hien: "<<Dem(a,m,n,x);
    cout<<"\nMax: "<<Max(a,m,n);
    return 0;
}
