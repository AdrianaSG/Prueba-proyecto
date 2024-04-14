#include <iostream>

using namespace std;

int main ()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 10 };
	int arr3[5] = { 11, 12, 13, 14, 15 };
	int arr4[5] = { 45, 46, 47, 48, 49 };
	int arr5[5] = { 50, 51, 52, 53, 54 };

	int* puntero[5];

	puntero[0] = arr1;
	puntero[1] = arr2;
	puntero[2] = arr3;
	puntero[3] = arr4;
	puntero[4] = arr5;

	for (int i = 0; i < 5; i++) {
		cout << "Arreglo " << i + 1 << ":" << endl;
		for (int j = 0; j < 5; j++) {
			cout << *(puntero[i] + j) << " ";
		}
		cout << endl;
	}

	return 0;
	system("pause");
}