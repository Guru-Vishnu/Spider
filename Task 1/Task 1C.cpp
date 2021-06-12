#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, r, x, y, i, b, d = 0;
	vector<int> c, s;
	
  cin >> n >> r >> x >> y;
	
  for (i = 0; i < n; i++)
	{
		cin >> b;
		c.push_back(b);
	}
	
  for (i = 0; i < n; i++)
	{
		cin >> b;
		s.push_back(b);
	}
	
  for (i = 0; i < n; i++)
	{
		if (c[i] && s[i])
			d += x;
		else if (c[i] && !s[i])
			d -= y;
	}
	
  if (d > 0)
		cout << "promoted";
	else if (d < 0)
		cout << "demoted";
	else
		cout << "no change";
	
  return 0;
}
