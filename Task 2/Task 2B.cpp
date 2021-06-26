#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i, j, q;
    long n, l, r, v;
    vector<int> a;
    
    cin >> n;
    
    for (i = 0; i < n; i++)
        a.push_back(i);
    
    cin >> q;
    
    for (i = 0; i < q; i++)
    {
        cin >> l >> r >> v;
        for (j = l; j <= r; j++)
            a[j] += v;
    }
    
    j = a[0];
    
    for (i = 1; i < n; i++)
        if (a[i] > j)
            j = a[i];
    
    cout << j;
    
    return 0;
}
