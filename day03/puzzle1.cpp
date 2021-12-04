#include <iostream>
#include <cmath>

const size_t SIZE = 12;

int binary_to_decimal(bool bi[]);

int main()
{
	bool epsilon[SIZE] = {}, gamma[SIZE] = {};
	int data[SIZE] = {};
	std::string input;

	while(std::cin >> input)
	{
		for(int i = 0; i < SIZE; i++)
		{
			if(input[i] == '1') data[i]++;
			else data[i]--;
		}
	}

	for(int i = 0; i < SIZE; i++)
	{
		if(data[i] > 0)
			gamma[i] = 1;
		else
			gamma[i] = 0;
		epsilon[i] = !gamma[i];
	}

	std::cout << binary_to_decimal(epsilon) * binary_to_decimal(gamma) << std::endl;

	return 0;
}

int binary_to_decimal(bool bi[])
{
	int sum = 0;
	for(int i = 0; i < SIZE; i++)
	{
		if(bi[SIZE-1-i])
			sum += pow(2, i);
	}
	return sum;
}