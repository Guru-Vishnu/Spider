#include<iostream>
#include<string>

using namespace std;

void main()
{
	int n, i, j, c = 0;
	string s;
	
	cin >> n;
	cin >> s;

	for (i = 0, j = n / 2; i < j; n /= 2, i = 0, j = n / 2)
	{
		for (; i < n / 2; i++, j++)
		{
			if (s[i] != s[j])
				goto end;
		}
		c++;
	}

	end:
	cout << c;
}
