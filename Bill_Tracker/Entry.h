/*
	Entry Object, holds the data for each entry that is then added to a list.
	Each entry object has a name, the amount, and due date.
*/
#ifndef ENTRY_H
#define ENTRY_H
#include <string>

class Entry {
	std::string _name;
	int _amt;
	std::string _due;
public:
	Entry() : _name(), _amt(0), _due() {}
	void setName(std::string name) { _name = name; }
	std::string getName() const { return _name; }
	void setAmount(int amt) { _amt = amt; }
	int getAmount() const { return _amt; }
	void setDue(std::string due) { _due = due; }
	std::string getDue() const { return _due; }
};
#endif //ENTRY_H