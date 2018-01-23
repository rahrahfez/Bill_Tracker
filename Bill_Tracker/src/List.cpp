#include "List.h"
#include <iostream>
#include <fstream>

void List::addEntryToList() {
	m_entry = new Entry();
	std::cout << "Enter name of entry: "; 
	std::string name;
	std::getline(std::cin, name); // FIX!! getline doesn't store user input
	std::cin.ignore(100, '\n');
	m_entry->setName(name);
	std::cout << "Enter the amount: ";
	int amount;
	std::cin >> amount;
	m_entry->setAmount(amount);
	std::cout << "Enter due date: ";
	std::string due;
	std::getline(std::cin, due);
	std::cin.ignore(1000, '\n');
	m_entry->setDue(due);
	m_entries.push_back(m_entry);
}

void List::deleteEntryFromList(int entry) {
	std::cout << "Which entry would you like to delete: " << std::endl;

	
}

void List::printListOfEntries() {
	for (auto i = m_entries.begin(); i < m_entries.end(); i++) {
		std::cout << (*i)->getName() << " : $" << (*i)->getAmount() << " : " << (*i)->getDue() << std::endl;
	}
}

void List::saveToFile() {
	std::ofstream output("output.txt");
	if (!output) std::cout << "File was not created!" << std::endl;
	output << "___Name___ | ___Amount___ | ___Due___ " << std::endl;
	for (const auto &i : m_entries) { 
		output << i->getName() << " | $" << i->getAmount() << " | " << i->getDue() << std::endl; 
		output << "--------------------------" << std::endl;
	}
	int sum = 0;
	for (const auto &i : m_entries) {
		sum += i->getAmount();
	}
	output << "___Total Due___: $" << sum;
	output.close();
}