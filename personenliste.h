#pragma once
#include "person.h"
#include <stdexcept>
#include <vector>
#include <string>

enum class Sort_eigenschaften{Groesse, Gewicht, Alter, IQ};

class Personenliste
{
	std::vector<Person> personenliste;
public:
	explicit Personenliste(const std::vector<Person>& = {});
	void person_hinzufuegen(const Person&);
	void sort_personenliste(const Sort_eigenschaften&);
	std::ostream& print(std::ostream&) const;
};
std::ostream& operator<<(std::ostream&, const Personenliste&);
