//Generate all possible parentheses
#include <iostream>
#define MAX_SIZE 100

using namespace std;

void print_Parenthesis(int pos, int n, int open, int close)
{
	static char str[MAX_SIZE];	
	
	if (close == n)
	{
		cout << str << endl;
		return;
	}
	else
	{
		if (open > close)
		{
			str[pos] = ')';
			print_Parenthesis(pos + 1, n, open,	close + 1);
		}
		
		if (open < n)
		{
			str[pos] = '(';
			print_Parenthesis(pos + 1, n, open + 1, close);
		}
	}
}

void printParenthesis(int n)
{
	if (n > 0)
		print_Parenthesis(0, n, 0, 0);
		
	return;
}	

int main()
{
	int n;
	cin>>n;
	printParenthesis(n);

	return 0;
}


