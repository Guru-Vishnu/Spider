#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n, i, c, b = 0, l = 0, u = 0, pd, qd, pb = 0, qb = 0;
	string s;
	
	cin >> n;
	cin >> s;
	
	l = pow(2, n - 1);
	
	for (i = 0; i < n; i++)
	{
		c = (s[i] == '1') ? 1 : 0;
		b += pow(2, n - i - 1) * c;
		u += pow(2, n - i - 1);
	}

	if (b == l || b == u)
		cout << -1;
	
	else
	{
		pd = b - 1;
		qd = b + 1;

		i = 0;
		while (pd > 0)
		{
			pb += pd % 2 * pow(10, i);
			pd /= 2;
			i++;
		}
		
		i = 0;
		while (qd > 0)
		{
			qb += qd % 2 * pow(10, i);
			qd /= 2;
			i++;
		}
		
		cout << pb << " " << qb;
	}
	
	return 0;
}
