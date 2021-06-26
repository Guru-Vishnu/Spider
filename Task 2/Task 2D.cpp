#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i, N, b1, b2, maxSum = 0;

    cin >> N;

    for (i = 0; i < N - 1; i++)
    {
        cin >> b1;
        maxSum += 2 * b1;
        if (i)
            if (b1 < b2)
                maxSum -= b1 + b2;
            else
                maxSum -= b1;
        b2 = b1;
    }
    
    cout << maxSum;

    return 0;
}
