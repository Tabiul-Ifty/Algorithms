#include<iostream>

using namespace std;

int search(int a[], int n, int e)
{
	int first, last, mid;
	first = 0;
	last = n - 1;

	while (first <= last)
	{
		mid = (first + last) / 2;
		if (e == a[mid])
			return(mid);
		else
			if (e > a[mid])
				first = mid + 1;
			else
				last = mid - 1;
	}

	return -1;
}

int main()
{
	int n, i, a[100], e, res;
	cout << "How Many Elements:";
	cin >> n;
	cout << "\nEnter Elements of Array in Ascending order\n";

	for (i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << "\nEnter element to search:";
	cin >> e;

	res = search(a, n, e);

	if (res != -1)
		cout << "\nElement found at index " << res ;
	else
		cout << "\nElement is not found....!!!";

	system("pause");

	return 0;
}

