#include <iostream>
#include <clocale>

using namespace std;

/*
* Лабораторная работа 6. Поливцев Михаил, ИВТ-31. Задание 1 (со статическим выделением памяти).
* Индивидуальный вариант задания 16.
* Дана матрица размера M × N. Для каждого столбца матрицы найти
* произведение его элементов.
*/

int main() {
	setlocale(LC_ALL, "ru");

	const int ms_1 = 5, ms_2 = 5;
	int array[ms_1][ms_2];
	int m, n;
	double s = 1;
	cout << "Введите размер матрицы >> ";
	cin >> m >> n;
	if (m > ms_1 || n > ms_2 || m < 1 || n < 1) {
		cout << "неверный ввод" << endl;
		return 1;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Введите элемент матрицы >> ";
			cin >> array[i][j];
		}
	}

	// вывод матрицы для удобства
	cout << "----------------------------------" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "----------------------------------" << endl;

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			s *= array[i][j];
		}
		cout << "Произведение элементов " << j + 1 << " столбца = " << s << endl;
		s = 1;
	}
}