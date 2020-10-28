#pragma once
void read(int*& a, size_t& n);

int* random_array(size_t n);

void put_elem(int*& a, size_t& n);

void remove_duplicate(int*& a, size_t& n);

bool check_order(int* a, size_t n);

int binary_search(int* a, size_t n, int el);

void rec_fast_sort(int*& a, int left, int right);