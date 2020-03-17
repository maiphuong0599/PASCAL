#include<iostream>
#include<math.h>
using namespace std;
bool nguyento(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n%i == 0)
            return 0;
    return 1;
}
void Phantich(int n)
{
	for(int i=2;i<=n;i++)
        if (n%i == 0 && nguyento(i) ) {
            cout << i << " ";
            n /= i;
        }
}
int main(){
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    Phantich(n);
    return 0;
}
