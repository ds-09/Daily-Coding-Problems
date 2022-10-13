/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n] = {1, 2, 22, 3}; // int 4 bytes
    cout << sizeof(a) << endl;
    for (int x : a)
    {
        cout << x << endl;
    }
}
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Card
{
    int color; // 0,1
    int shape; // 1,2,3,4,
    char x;
};
int main(void)
{
    struct Card deck[10] = {{0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 1}, {1, 2}, {1, 3}, {1, 4}}; // 8*52 : size
    printf("%d ", sizeof(deck));
    printf("%d\n%d\n%d\n%d\n", deck[0].color, deck[0].shape, deck[1].color, deck[3].shape);
    cout << deck[4].color << endl;
}