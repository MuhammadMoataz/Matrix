#include"matrix.h"

int main()
{
    // for instance, we will use a 3*3*3 matrix 
    // for example: i = 2, j = 1 and k = 0, so the index is supposed to be 21

    int n, m, p;
    n = 3;
    m = 3;
    p = 3;

    int i, j, k;
    i = 2;
    j = 1;
    k = 0;
    vector<int> vc = to_vectr(n, m, p);
    int indx = matrix_vectr(i, j, k, m, p);
    cout << indx << endl;
    return 0;
}
