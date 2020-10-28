#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9/defs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(RemoveDuplicateTest)
	{
	public:
		
		TEST_METHOD(RemoveDuplicateTestMethod1)
		{
			size_t n{ 7 };
			int* ar = new int[n] { 1, 2, 3, 3, 2, 1, 10 };
			int* res = new int[4]{ 1, 2, 3, 10 };
			remove_duplicate(ar, n);
			for (int i{ 0 }; i < n; i++) {
				Assert::AreEqual(ar[i], res[i]);
			}
			delete[] ar, res;
			ar = res = nullptr;
		}


		TEST_METHOD(RemoveDuplicateTestMethod2)
		{
			size_t n{ 5 };
			int* ar = new int[n] { 1, 1, 1, 1, 1 };
			int* res = new int[1]{ 1 };
			remove_duplicate(ar, n);
			for (int i{ 0 }; i < n; i++) {
				Assert::AreEqual(ar[i], res[i]);
			}
			delete[] ar, res;
			ar = res = nullptr;
		}


		TEST_METHOD(RemoveDuplicateTestMethod3)
		{
			size_t n{ 4 };
			int* ar = new int[n] { 1, 2, 3, 4 };
			int* res = new int[4]{ 1, 2, 3 ,4 };
			remove_duplicate(ar, n);
			for (int i{ 0 }; i < n; i++) {
				Assert::AreEqual(ar[i], res[i]);
			}
			delete[] ar, res;
			ar = res = nullptr;
		}
	};


	TEST_CLASS(CheckOrderTest)
	{
	public:

		TEST_METHOD(CheckOrderTestMethod1)
		{
			size_t n{ 7 };
			int* ar = new int[n] { 1, 3, 5, 7, 9, 9, 12 };
			Assert::IsTrue(check_order(ar, n));
			delete[] ar;
			ar = nullptr;
		}


		TEST_METHOD(CheckOrderTestMethod2)
		{
			size_t n{ 5 };
			int* ar = new int[n] { 1, 1, 1, 1, 1 };
			Assert::IsTrue(check_order(ar, n));
			delete[] ar;
			ar = nullptr;
		}


		TEST_METHOD(CheckOrderTestMethod3)
		{
			size_t n{ 4 };
			int* ar = new int[n] { 1, 2, 6, 4 };
			Assert::IsFalse(check_order(ar, n));
			delete[] ar;
			ar = nullptr;
		}
	};


	TEST_CLASS(BinarySearchTest)
	{
	public:

		TEST_METHOD(BinarySearchTestMethod1)
		{
			size_t n{ 7 };
			int* ar = new int[n] { 1, 3, 5, 7, 9, 9, 12 };
			Assert::AreEqual(binary_search(ar, n, 9), 5);
			delete[] ar;
			ar = nullptr;
		}


		TEST_METHOD(BinarySearchTestMethod2)
		{
			size_t n{ 5 };
			int* ar = new int[n] { 1, 1, 1, 1, 1 };
			Assert::AreEqual(binary_search(ar, n, 2), -1);
			delete[] ar;
			ar = nullptr;
		}


		TEST_METHOD(BinarySearchTestMethod3)
		{
			size_t n{ 1 };
			int* ar = new int[n] { 10 };
			Assert::AreEqual(binary_search(ar, n, 10), 0);
			delete[] ar;
			ar = nullptr;
		}


		TEST_METHOD(BinarySearchTestMethod4)
		{
			size_t n{ 7 };
			int* ar = new int[n] { 2, 2, 3, 5, 7, 8, 10 };
			Assert::AreEqual(binary_search(ar, n, 2), 1);
			delete[] ar;
			ar = nullptr;
		}
	};


	TEST_CLASS(RecFastSortTest)
	{
	public:

		TEST_METHOD(RecFastSortTestMethod1)
		{
			size_t n{ 1 };
			int* ar = new int[n] { 1 };
			int* res = new int[n] { 1 };

			rec_fast_sort(ar, 0, n - 1);
			for (int i{ 0 }; i < n; i++) {
				Assert::AreEqual(ar[i], res[i]);
			}
			delete[] ar, res;
			ar = res = nullptr;
		}


		TEST_METHOD(RecFastSortTestMethod2)
		{
			size_t n{ 5 };
			int* ar = new int[n] { 1, 2, 3, 4, 5 };
			int* res = new int[n] { 1, 2, 3, 4, 5 };

			rec_fast_sort(ar, 0, n - 1);
			for (int i{ 0 }; i < n; i++) {
				Assert::AreEqual(ar[i], res[i]);
			}
			delete[] ar, res;
			ar = res = nullptr;
		}


		TEST_METHOD(RecFastSortTestMethod3)
		{
			size_t n{ 11 };
			int* ar = new int[n] { 1, 6, 3, 8, 1, 9, 12, 0, 0, 3, -1};
			int* res = new int[n] { -1, 0, 0, 1, 1, 3, 3, 6, 8, 9, 12 };

			rec_fast_sort(ar, 0, n - 1);
			for (int i{ 0 }; i < n; i++) {
				Assert::AreEqual(ar[i], res[i]);
			}
			delete[] ar, res;
			ar = res = nullptr;
		}


		TEST_METHOD(RecFastSortTestMethod4)
		{
			size_t n{ 10 };
			int* ar = new int[n] { 1, 6, 3, 8, 1, 9, 12, 0, 0, 3 };
			int* res = new int[n] { 0, 0, 1, 1, 3, 3, 6, 8, 9, 12 };

			rec_fast_sort(ar, 0, n - 1);
			for (int i{ 0 }; i < n; i++) {
				Assert::AreEqual(ar[i], res[i]);
			}
			delete[] ar, res;
			ar = res = nullptr;
		}
	};
}
