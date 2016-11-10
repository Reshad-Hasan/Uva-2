#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

int main()
{
	string m, f;
	int ml, fl, count;
	for (int i = 1;;i++)
	{
		cin >> m;
		if (m == "#")
			break;
		cin >> f;
		ml = m.length();
		fl = f.length();
		count = 0;
		for (int j = 0;j < ml;j++)
		{
			for (int k = 0;k < fl;k++)
			{
				if (m[j] == f[k])
				{
					if (abs(j - k) < 2)
					{
						count++;
						f[k] = '\0';
					}
					break;
				}
			}
		}
		cout << "Case #"<<i<< ": you can visit at most " << count << " cities." << endl;
	}
}



