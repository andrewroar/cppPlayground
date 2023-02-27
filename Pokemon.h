#pragma once
#include <string>
class Pokemon
{

public:
	std::string name;

	Pokemon(std::string name1 = "Pikechu") {
		name = name1;
	};

	virtual bool showTrue();
};

