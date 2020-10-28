/*
1. Реализовать функцию ввода элементов массива с выделением динамической памяти. Pазмер массива также запрашивать в функции.
2. Реализовать функцию создания динамического массива, заданного размера и заполнения его случайными числами.
3. Реализовать функцию вставки значения в середину динамического массива. Выделять память под массив нового размера. 
	Если число элементов в массиве нечётное, вставить элемент после центрального.
4. Реализовать функцию удаления дубликатов из массива. Освобождать не используемую память.
5.1) Функция проверки упорядоченности массива по возрастанию.
5.2) Функция двоичного поиска значения в упорядоченном массиве.
5.3) Рекурсивная функция быстрой сортировки.
*/

#include <iostream>
#include "defs.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	/*



	// # 1
	int* a;
	size_t n;
	read(a, n);

	// # 2
	size_t n0{ 5 };
	int* c = random_array(n0);
	for (int i{ 0 }; i < n0; i++) {
		cout << c[i] << "\t";
	}
	cout << endl;

	// # 3
	size_t n1{ 4 }, n2{ 5 };
	int* d = new int[n1]{ 1, 2, 3, 4 };
	int* v = new int[n2]{ 1, 2, 3, 4, 5 };

	put_elem(d, n1);
	put_elem(v, n2);
	for (int i{ 0 }; i < n1; i++) {
		cout << d[i] << "\t";
	}
	cout << endl;
	for (int i{ 0 }; i < n2; i++) {
		cout << v[i] << "\t";
	}
	cout << endl;

	// # 4
	size_t n3{ 7 };
	int* u = new int[7]{ 1, 2, 3, 3, 2, 1, 10 };
	for (int i{ 0 }; i < n3; i++) {
		cout << u[i] << "\t";
	}
	cout << endl;

	remove_duplicate(u, n3);

	for (int i{ 0 }; i < n3; i++) {
		cout << u[i] << "\t";
	}
	cout << endl;

	// # 5.1
	size_t n4{ 3 }, n5{ 4 }, n6{ 1 };
	int* x = new int[n4] {1, 2, 3};
	int* y = new int[n5] {1, 2, 3, 1};
	int* z = new int[n6] {13};
	cout << check_order(x, n4) << endl;
	cout << check_order(y, n5) << endl;
	cout << check_order(z, n6) << endl;

	// # 5.2
	int* ar3 = new int[5]{ 1, 2, 3, 4, 5 };
	cout << binary_search(ar3, 5, 6) << endl;

	// # 5.3
	int* ar0 = new int[7]{ 1, 6, 3, 8, 4, 7, 0 };
	int* ar1 = new int[8]{ 1, 6, 3, 8, 4, 7, 0, 6 };
	int* ar2 = new int[5]{ 5, 4, 3, 2, 1 };

	rec_fast_sort(ar2, 0, 4);
	rec_fast_sort(ar1, 0, 7);
	for (int i{ 0 }; i < 5; i++) {
		cout << ar2[i] << "\t";
	}
	cout << endl << endl;

	for (int i{ 0 }; i < 8; i++) {
		cout << ar1[i] << "\t";
	}
	cout << endl;



	*/
	size_t n{ 11 };
	int* ar = new int[n] { 1, 6, 3, 8, 1, 9, 12, 0, 0, 3, -1};
	rec_fast_sort(ar, 0, n - 1);
	for (int i{ 0 }; i < n; i++) {
		cout << ar[i] << "\t";
	}
	//system("pause");
	return 0;
}