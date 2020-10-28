#include <iostream>

using namespace std;

void read(int*& a, size_t& n)
{
	// ������� ���������� ������������� �������

	cout << "������� ���-�� ��������� �������: "; 
	cin >> n;
	
	a = new int[n];
	for (int i{ 1 }; i <= n; i++) {
		cout << "������� " << i << " �������: "; 
		cin >> a[i];
	}

	return;
}


int* random_array(size_t n)
{
	// ������� �������� ������������� ������� ������� <n>
	
	int* a = new int[n];
	for (int i{ 0 }; i <= n; i++) {
		a[i] = rand() % 10;
	}

	return a;
}


void put_elem(int*& a, size_t &n)
{
	// ������� ��������� ������� � �������� �������

	int* b = new int[n + 1];
	int num;
	cout << "������� �����: ";
	cin >> num;

	if (n % 2 == 0) {
int i{ 0 };
for (i; i < n / 2; i++)
	b[i] = a[i];
b[i] = num;
i++;
for (i; i < n + 1; i++)
	b[i] = a[i - 1];
	}
	else {
	int i{ 0 };
	for (i; i <= n / 2; i++)
		b[i] = a[i];
	b[i] = num;
	i++;
	for (i; i < n + 1; i++)
		b[i] = a[i - 1];
	}
	n++;
	delete[] a;
	a = new int[n];
	for (int i{ 0 }; i < n; i++) {
		a[i] = b[i];
	}
	delete[] b;
	b = nullptr;

	return;
}


void remove_duplicate(int*& a, size_t& n)
{
	// ������� ������� ��������� �� �������

	int* b = new int[n];
	int m{ 0 };
	for (int i{ 0 }; i < n; i++) {
		bool tf = true;
		for (int j{ 0 }; j < m; j++) {
			if (a[i] == b[j]) {
				tf = false;
				break;
			}
		}
		if (tf) {
			b[m] = a[i];
			m++;
		}
	}
	delete[] a;
	a = new int[m];
	for (int i{ 0 }; i < m; i++)
		a[i] = b[i];
	n = m;
	delete[] b;
	b = nullptr;

	return;
}


bool check_order(int* a, size_t n)
{
	// ������� �������� ��������������� ������� �� �����������

	bool tf{ true };
	for (int i{ 1 }; i < n; i++) {
		if (a[i - 1] > a[i]) {
			tf = false;
			break;
		}
	}

	return tf;
}


int binary_search(int* a, size_t n, int el)
{
	// ������� ��������� ������ �������� � ������������� �������

	// ������� ���������� ������ �������� ��������, ���� �������
	// �������� � �������  ���, �� ������������ -1
	// ���� �������� ���������, �� ���������� ��������� ������

	int left{ 0 }, right = n, mid;
	while (left <= right) {
		mid = left + (right - left) / 2;
		if (el < a[mid])
			right = mid - 1;
		else if (el > a[mid])
			left = mid + 1;
		else
			return mid;
	}

	return -1;
}


void rec_fast_sort(int*& a, int left, int right)
{
	// ����������� ������� ������� ����������

	int piv{ (left + right + 1) / 2 }, l{ left }, r{ right };
	while (l <= r) {
		while (a[l] <= a[piv] && l < piv)
			l++;

		while (a[r] >= a[piv] && r > piv)
			r--;

		if (l == r)
			break;

		if (l == piv) {
			swap(a[piv], a[r]);
			l = left;
			r = right;
			continue;
		}

		if (r == piv) {
			swap(a[piv], a[l]);
			l = left;
			r = right;
			continue;
		}

		if (l < r) {
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}

		if (left < r)
			rec_fast_sort(a, left, r - 1);
		if (l < right)
			rec_fast_sort(a, l + 1, right);

	return;
}