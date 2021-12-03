#include <iostream>

void main()
{
	std::string command;
	int units = 0, horizontal_position = 0, depth = 0, aim = 0;

	while(std::cin >> command >> units)
	{
		if(command == "forward")
		{
			horizontal_position += units;
			depth += aim * units;
		}
		if(command == "down")
			aim += units;
		if(command == "up")
			aim -= units;
	}

	std::cout << horizontal_position * depth << std::endl;
}