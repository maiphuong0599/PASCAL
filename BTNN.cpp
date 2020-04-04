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

void tim_sach_ma_X(thuvien a[], int n)
{
	int x;
	cout << "\nNhap ma so cuon sach can tim ";
	cin >> x;
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
	int luachon;
	do
	{
		
		system("cls");
		cout << endl << endl;
		cout << "               +-------------------------------------------------+ \n";
		cout << "               |          CHUONG TRINH QUAN LY THU VIEN          | \n";
		cout << "               |-------------------------------------------------| \n";
		cout << "               |                                                 | \n";
		cout << "               |  1. Nhap danh sach cuon sach vao thu vien.      | \n";
		cout << "               |  2. Xuat danh sanh cac cuon sach trong thu vien.| \n";
		cout << "               |  3. Tim kiem cuon sach theo ma so.              | \n";
		cout << "               |  4. Tim kiem cuon sach theo ten.                | \n";
		cout << "               |  5. Xuat cac cuon sach co gia cao nhat.         | \n";
		cout << "               |  6. Thoat.                                      | \n";
		cout << "               |                                                 | \n";
		cout << "               +-------------------------------------------------+ \n";

		cout << "\nMoi chon cong viec tu 1 den 6\n";
		cin >> luachon;

		switch (luachon)
		{
		case 1:
			int n;
			system("cls");
			cout << "Nhap so luong cuon sach ";
			cin >> n;
			nhap_danh_sach(a, n);
			system("pause");
			break;
		case 2:
			system("cls");
			xuat_danh_sach(a, n);
			system("pause");
			break;
		case 3:
			system("cls");
			tim_sach_ma_X(a, n);
			system("pause");
			break;
		case 4:
			system("cls");
			tim_sach_ten_Y(a, n);
			system("pause");
			break;
		case 5:
			system("cls");
			max_book(a, n);
			system("pause");
			break;
		case 6:
			break;
		default:
			cout << "Ban chon sai roi vui long nhap lai!!! \n";
			break;
		}
	} while (luachon);
	
	return 0;
}
