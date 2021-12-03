#include <iostream>

using namespace std;

int main()
{
	int curr, prev;
	int count = 0; 

	cin >> prev;
	while(cin >> curr)
	{
		if(prev < curr) count++;
		prev = curr; 
	}
	cout << count << endl;

	return 0;
}