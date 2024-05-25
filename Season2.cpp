// Season2.cpp: С использованием ifdef/endif.

#include "Season2.h"
#include <iostream>

#define SUMMER

int main()
{
#ifdef WINTER
	std::cout << "Winter." << '\n';
#endif
#ifdef SPRING
	std::cout << "Spring." << '\n';
#endif
#ifdef SUMMER
	std::cout << "Summer." << '\n';
#endif
#ifdef AUTUMN
	std::cout << "Autumn." << '\n';
#endif
	return 0;
}
