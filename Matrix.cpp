#include"Matrix.h"

vector<int> to_vectr(int n, int m, int p) {
	long long int sz = n * m * p;
	vector<int> vctr(sz);
	return vctr;
}

int matrix_vectr(int i, int j, int k, int m, int p) {
	int indx = i * (m * p) + (j * p) + k;
	return indx;
}