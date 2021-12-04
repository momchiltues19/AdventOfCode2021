#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const size_t SIZE = 12;

int binary_to_decimal(string);
char find_more_common(vector<string>, int);

int main()
{
	int data[SIZE] = {};
	vector<string> report;
	string input;

	while(cin >> input)
	{
		report.push_back(input);
	}

	vector<string> oxigen, co2;
	for (string r : report)
	{
		if(r[0] == find_more_common(report, 0))
			oxigen.push_back(r);
		else
			co2.push_back(r);
	}

	for(int i = 1; oxigen.size() > 1; i++)
	{
		char data = find_more_common(oxigen, i);
		vector<string> new_oxi;
		for(int j = 0; j < oxigen.size(); j++)
		{
			if(oxigen[j][i] == data)
 				new_oxi.push_back(oxigen[j]);
		}
		oxigen = new_oxi;
	}

	for(int i = 1; co2.size() > 1; i++)
	{
		char data = find_more_common(co2, i);
		vector<string> new_co2;
		for(int j = 0; j < co2.size(); j++)
		{
			if(co2[j][i] != data)
 				new_co2.push_back(co2[j]);
		}
		co2 = new_co2;
	}

	cout << binary_to_decimal(oxigen.front()) * binary_to_decimal(co2.front()) << endl;

	return 0;
}

int binary_to_decimal(string bi)
{
	int sum = 0;
	for(int i = 0; i < SIZE; i++)
	{
		if(bi[SIZE-1-i] == '1')
			sum += pow(2, i);
	}
	return sum;
}

char find_more_common(vector<string> work, int position)
{
	int data = 0;
	for(int i = 0; i < work.size(); i++)
	{
		if(work[i][position] == '1') data++;
		else data--;
	}

	if(data >= 0)
		return '1';
	else
		return '0';
}