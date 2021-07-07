//Count all possible paths from top left to bottom right

#include <iostream>
using namespace std;

int numberOfPaths(int m, int n)
{
	int path = 1;
	for (int i = n; i < (m + n - 1); i++) 
	{
		path *= i;
		path /= (i - n + 1);
	}
	return path;
}

int main()
{
	int m,n;
	cin>>m>>n;
	cout << numberOfPaths(m, n);
	return 0;
}


