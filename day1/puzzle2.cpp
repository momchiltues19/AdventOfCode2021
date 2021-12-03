#include <iostream>

using namespace std;

int main()
{
	int count = 0; 
	int values[4] = {};

	for(int i = 0; i < 3; i++)
		cin >> values[i];
	while(cin >> values[3])
	{
		if(values[0] + values[1] + values[2] < values[1] + values[2] + values[3]) count++;
		for(int i = 0; i < 3; i++)
			values[i] = values[i+1];
	}
	cout << count << endl;

	return 0;
}