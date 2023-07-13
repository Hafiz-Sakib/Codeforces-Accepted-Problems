#include <iostream>
using namespace std;

int main()
{
	int k{};

	cin >> k;

	int i;

	int A[100];

    int B[100];

	for (i = 0; i < k; i++)
	{
		int a{};
		int b{};

		cin >> a >> b;
		A[i] = a;
        B[i] = b;
		
	}

	for (i = 0; i < k; i++)
	{
        if (A[i]>1)
        {
		cout << A[i] - 1 << '\n';
        }
        else if (A[i]==1)
        {
            cout << B[i] + 1 << '\n';
        }
	}

	return 0;
}