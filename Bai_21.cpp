// chuyen doi sang he nhi phan
#include<iostream>
#include<stdlib.h>
using namespace std;

int Dec2Bin ( int n )
{
	int s=0 , so =n;
	while (so > 0){
		int Du = so % 2 ;
		so /= 2 ;
		s = s * 10 + Du;
	}
	return s ;
}
	
int main()
{
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	cout<<"Sau khi chuyen doi: "<< Dec2Bin(n);
	return 0;
}	
