#include<iostream>
using namespace std;
#include<string>

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
	cin.ignore();
	cout << "Nhap ten cuon sach: ";
	getline(cin, x.tensach);
	cout << "Nhap gia cuon sach: ";
	cin >> x.gia;
}

void xuat_thong_tin_sach(thuvien x)
{
	cout << "\nMa so cuon sach: " << x.ms;
	cout << "\nTen cuon sach: " << x.tensach;
	cout << "\nGia cuon sach: " << x.gia << endl;
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
		cout << "\nCuon sach " << i + 1;
		xuat_thong_tin_sach(a[i]);
	}
}

void tim_sach_ma_X(thuvien a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].ms == x)
		{
			xuat_thong_tin_sach(a[i]);
		}
	}

}

void tim_sach_ten_Y( thuvien a[], int n )
{
	string tensach_y;
	rewind(stdin);
	cout << "\nNhap ten cuon sach can tim ";
	getline(cin,tensach_y);
	for (int i = 0; i < n; i++)
	{
		if (a[i].tensach == tensach_y)
		{
			xuat_thong_tin_sach(a[i]);
		}
	}
}

void max_book( thuvien a[], int n)
{
	float max = a[0].gia;
	for (int i = 0; i < n; i++)
	{
		if (max < a[i].gia)
		{
			max = a[i].gia;
		}
	}
	cout << "\nNhung cuon sach co gia cao nhat: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i].gia = max)
		{
			xuat_thong_tin_sach(a[i]);
		}
	}
}

int main()
{
	thuvien a[100];
	int n, x;
	cout << "Nhap so luong cuon sach ";
	cin >> n;
	nhap_danh_sach(a, n);
	xuat_danh_sach(a, n);
	cout << "\nNhap ma so cuon sach can tim ";
	cin >> x;
	tim_sach_ma_X(a, n, x);
	tim_sach_ten_Y(a, n);
	max_book(a, n);
	return 0;	
}
