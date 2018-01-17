#include "List.h"
#include <iostream>

int main() {
	List list;
	int input;
	do {
		std::cout << "__Enter Command__ " << std::endl;
		std::cout << "1. Add item to list." << std::endl;
		std::cout << "2. Print items in list." << std::endl;
		std::cout << "3. Exit" << std::endl;
		std::cin >> input;

		if (input == 1) list.addEntryToList();
		if (input == 2) list.printListOfEntries();
		if (input == 3) return false;
	} while (true);
	return 0;
}