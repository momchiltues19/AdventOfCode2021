#include <iostream>

void main()
{
	std::string command;
	int units = 0, horizontal_position = 0, depth = 0;

	while(std::cin >> command >> units)
	{
		if(command == "forward")
			horizontal_position += units;
		if(command == "down")
			depth += units;
		if(command == "up")
			depth -= units;
	}

	std::cout << horizontal_position * depth << std::endl;
}