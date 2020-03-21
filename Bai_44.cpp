#include<iostream>
using namespace std;
#define NMAX 100
#define MMAX 100
int A[MMAX][NMAX], B[MMAX][NMAX], C[MMAX][NMAX];
int na, nb, ma, mb;
void Fill_array(int a[][NMAX], int &m, int &n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
        cout << "a[" << i << "][" << j << "] = ";
		cin >> a[i][j];
      }
}

void Print_array(int a[][NMAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout<<"\n \n";
	}
}	

bool Check(){
	return (ma == mb && na == nb ); 
}

void Add(){
	for(int i = 0; i< ma; i++){
		for(int j = 0; j< na; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

int main()
{
	cout<<"Enter matrices A: "<<endl;
	cin>>ma>>na;
	Fill_array(A,ma,na);
	cout<<"Enter matrices B: "<<endl;
	cin>>mb>>nb;
	Fill_array(B,mb,nb);
	Print_array(A,ma,na);
	cout<<"\n"<<"    +    "<<"\n";
	Print_array(B,mb,nb);
	if(Check()){
		Add();
		cout<<"Matrices C = \n";
		Print_array(C,ma,na);
	}else
		cout<<"Matrices not adding";
	return 0;
}
	
	
