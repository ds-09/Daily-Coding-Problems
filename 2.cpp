#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    /*int A[5] = {1, 3, 4, 56, 66};
    int *p = A;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    */
    int *p, n;
    cin >> n;
    p = new int[5];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
    free(p); // c
    cout << p << endl;
    delete[] p; // cpp3
    cout << p << endl;
}
