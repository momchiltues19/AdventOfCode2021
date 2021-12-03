#include <iostream>

void main()
{
	int curr, prev;
	int count = 0; 

	std::cin >> prev;
	while(std::cin >> curr)
	{
		if(prev < curr) count++;
		prev = curr; 
	}
	
	std::cout << count << std::endl;
}