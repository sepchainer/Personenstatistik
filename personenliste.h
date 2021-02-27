#pragma once
#include "person.h"
#include <stdexcept>
#include <vector>
#include <string>

class Personenliste
{
	std::vector<Person> personenliste;
public:
	enum class Sort_eigenschaften{Groesse, Gewicht, Alter, IQ};
	Personenliste(const std::vector<Person> & = {});
	void person_hinzufuegen(const Person&);
	void sort_personenliste(const Sort_eigenschaften&);
	std::ostream& print(std::ostream&) const;
};
std::ostream& operator<<(std::ostream&, const Personenliste&);
