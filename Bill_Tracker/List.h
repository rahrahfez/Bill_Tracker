/*
	Holds a list of all the entries.
	Can be used to print all the entries in the list.
	Can output list onto a .txt file.
*/
#ifndef LIST_H
#define LIST_H
#include "Entry.h"	
#include <vector>
#include <memory>

class List {
	std::vector<Entry*> _entries;
	Entry* _entry;

public:
	List() {}
	void addEntryToList();
	void deleteEntryFromList();
	void printListOfEntries();
};
#endif //LIST_H
