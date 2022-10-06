// проэкт создан с помощью персонального шаблона
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;
void func(int* pn, int num) {
	int x = *pn;
	for (int i = 1; i < num; i++)
		*pn *= x;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 3, m;
	const int size = 10;
	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pa = &arr[0];
	
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			int tmp = *pa;
			*pa = *(pa + 1);
			*(pa + 1) = tmp;
		}
		cout << *pa << ' ';
		pa++;
	}
	func(&n, 3);
	cout << '\n' << n;

	return 0;
}