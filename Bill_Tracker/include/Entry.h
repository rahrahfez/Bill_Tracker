/*
	Entry Object, holds the data for each entry that is then added to a list.
	Each entry object has a name, the amount, and due date.
*/
#ifndef ENTRY_H
#define ENTRY_H
#include <string>

class Entry {
	std::string m_name;
	int m_amount;
	std::string m_dueDate;
public:
	Entry() : m_name(), m_amount(0), m_dueDate() {}
	void setName(std::string name) { m_name = name; }
	std::string getName() const { return m_name; }
	void setAmount(int amt) { m_amount = amt; }
	int getAmount() const { return m_amount; }
	void setDue(std::string due) { m_dueDate = due; }
	std::string getDue() const { return m_dueDate; }
};
#endif //ENTRY_H