#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	do
	{
		cin >> n;
	}
	while (n < 1 || n > 100);
	
	if (n % 2 == 0 && n != 2)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
