//Possible Words from Phone Digits

#include <bits/stdc++.h>
using namespace std;

void findCombinations(vector<char> keypad[], int input[], string res, int index)
{
	if (index == -1) 
	{
		cout << res << " ";
		return;
	}

	int digit = input[index];

	int len = keypad[digit].size();

	for (int i = 0; i < len; i++) 
	{
		findCombinations(keypad, input, keypad[digit][i] + res, index - 1);
	}
}

int main()
{
	vector<char> keypad[] =
	{
		{}, {},	
		{ 'a', 'b', 'c' },
		{ 'd', 'e', 'f' },
		{ 'g', 'h', 'i' },
		{ 'j', 'k', 'l' },
		{ 'm', 'n', 'o' },
		{ 'p', 'q', 'r', 's'},
		{ 't', 'u', 'v' },
		{ 'w', 'x', 'y', 'z'}
	}
	/*int n;
	cin>>n;
	int input[n];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}*/
	/*int input[] = { 2, 3, 4 };

	int n = sizeof(input)/sizeof(input[0]);*/

	findCombinations(keypad, input, string(""), n - 1);

	return 0;
}

