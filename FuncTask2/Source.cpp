//������������ ������ ������� �++
#include <iostream>

using namespace std;

template <typename T> void showArray(T array[], int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << array[i] << ",";
	cout << "\b\b]\n";
}

template <typename T> double meanArray(T array[], int lenght) {
	double sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
		return sum / lenght;

}




int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	//������ 1.
	/*cout << "������ 1.\n����������� ������: \n";
	double z1[5] = { 1.6, 1.4, 0.0, 1.0, 1.5 };
	showArray(z1, 5);
	cout << "��. �����. ������� = " << meanArray(z1, 5) << "\n\n";*/

	//������ 2.





	return 0;
}