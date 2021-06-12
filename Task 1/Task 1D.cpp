#include<iostream>

using namespace std;

void main()
{
	int T, N[5], i, j, k, l, n;
	
  cin >> T;
	
  for (i = 0; i < T; i++)
		cin >> N[i];
	
  for (i = 0; i < T; i++)
	{
		n = int(N[i] / 2);
		for (j = 0; j < N[i]; j++)
		{
			if (j < n)
				k = j;
			else
				k = N[i] - j - 1;
			if (k == 0)
			{
				for (l = 0; l < N[i]; l++)
					cout << '*';
				cout << endl;
			}
			else 
			{
				for (l = 0; l <= n - k; l++)
					cout << '*';
				for (l = 0; l < N[i] - 2 * (n + 1 - k); l++)
					cout << ' ';
				for (l = 0; l <= n - k; l++)
					cout << '*';
				cout << endl;
			}
		}
	}
}
