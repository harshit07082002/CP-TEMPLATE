#include <bits/stdc++.h>
using namespace std;

// Function to return maximum
// among the two numbers
int maximum(int x, int y)
{
		return ((x + y + abs(x - y)) / 2);
}

// Function to return minimum
// among the two numbers
int minimum(int x, int y)
{
		return ((x + y - abs(x - y)) / 2);
}

// Driver code
int main()
{
	int x = 99, y = 18;

	// Displaying the maximum value
	cout <<"Maximum: " << maximum(x, y) << endl;

	// Displaying the minimum value
	cout << "Minimum: " << minimum(x, y) << endl;
	return 0;
}

