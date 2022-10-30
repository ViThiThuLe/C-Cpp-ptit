#include <bits/stdc++.h>
using namespace std;

// sắp xếp chọn - Selection Sort

void sapxepchon(int a[], int n)
{
    int vtri;
    for (int i = 0; i < n - 1; i++)
    {
        vtri = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[vtri])
                vtri = j;
        swap(a[vtri], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sapxepchon(a, n);
}
