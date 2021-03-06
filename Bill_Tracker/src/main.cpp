#include "List.h"
#include <iostream>
#include <fstream>

int main() {
	List list;
	int input;
	do {
		std::cout << "__Enter Command__ " << std::endl;
		std::cout << "1. Add item to list." << std::endl;
		std::cout << "2. Print items in list." << std::endl;
		std::cout << "3. Save to file" << std::endl;
		std::cout << "4. Exit" << std::endl;
		std::cin >> input;

		if (input == 1) {
			list.addEntryToList();
		}
		if (input == 2) {
			list.printListOfEntries();
		}
		if (input == 3) { 
			list.saveToFile(); 
			std::cout << "Saved!" << std::endl;
		}
		if (input == 4) return false;
	} while (true);
	std::cout << "Testing github" << std::endl;
	return 0;
}
