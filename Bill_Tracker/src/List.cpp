#include "List.h"
#include <iostream>


void List::addEntryToList() {
	_entry = new Entry();
	std::cout << "Enter name of entry: "; 
	std::string name;
	std::cin >> name;
	_entry->setName(name);
	std::cout << "Enter the amount: ";
	int amount;
	std::cin >> amount;
	_entry->setAmount(amount);
	std::cout << "Enter due date: ";
	std::string due;
	std::cin >> due;
	_entry->setDue(due);
	_entries.push_back(_entry);
}

void List::deleteEntryFromList() {
	delete _entry;
}

void List::printListOfEntries() {
	for (auto i = _entries.begin(); i < _entries.end(); i++) {
		std::cout << (*i)->getName() << " : " << (*i)->getAmount() << " : " << (*i)->getDue() << std::endl;
	}
}