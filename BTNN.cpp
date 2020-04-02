#include<iostream>
#include<string>
using namespace std;

struct thuvien
{
	int ms;
	string tensach;
	float gia;
};

void nhap_thong_tin_sach(thuvien& x)
{
	fflush(stdin);
	cout << "Nhap ma so cuon sach: ";
	cin >> x.ms;
	cout << "Nhap ten cuon sach: ";
	getline(cin, x.tensach);
	cout << "\nNhap gia cuon sach: ";
	cin >> x.gia;
}

void xuat_thong_tin_sach(thuvien x)
{
	cout << "\nMa so cuon sach: " << x.ms;
	cout << "\nTen cuon sach: " << x.tensach;
	cout << "\nGia cuon sach: " << x.gia;
}

void nhap_danh_sach(thuvien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap cuon sach " << i + 1 << endl;
		nhap_thong_tin_sach(a[i]);
	}
}

void xuat_danh_sach(thuvien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nCuon sach " << i + 1 << endl;
		xuat_thong_tin_sach(a[i]);
	}
}

void tim_sach_ma_X(thuvien a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].ms == x)
		{
			cout << "\nThong tin cuon sach can tim: ";
			cout << "\nMa so cuon sach: " << a[i].ms;
			cout << "\nTen cuon sach: " << a[i].tensach;
			cout << "\nGia cuon sach: " << a[i].gia;
		}
	}

}

void tim_sach_ten_Y( thuvien a[], int n )
{
	string tensach_y;
	rewind(stdin);
	cout << "Nhap ten cuon sach can tim";
	getline(cin,tensach_y);
	for (int i = 0; i < n; i++)
	{
		if (a[i].tensach == tensach_y)
		{
			xuat_thong_tin_sach(a[i]);
		}
	}
}

/*
void max_book( thuvien a[], int n)
{
		double count = 0;
		double max = a[0].gia;
		for (int i = 1; i < n; i++)
		{
			if (a[i].gia = max)
			{
				cout << "\nMa so cuon sach: " << a[i].ms;
				cout << "\nTen cuon sach: " << a[i].tensach;
				cout << "\nGia cuon sach: " << a[i].gia;
			}
		}
}
*/
int main()
{
	thuvien a[100];
	int n, x;
	cout << " Nhap so luong cuon sach ";
	cin >> n;
	nhap_danh_sach(a, n);
	xuat_danh_sach(a, n);
	cout << "Nhap ma so cuon sach can tim ";
	cin >> x;
	tim_sach_ma_X(a, n, x);
	tim_sach_ten_Y(a, n);
	//max_book(a, n);
	return 0;	
}
