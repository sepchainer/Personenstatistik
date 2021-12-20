#pragma once
#include <iostream>
class Person
{
	double groesse, gewicht, alter, iq;
public:
	Person(const double&, const double&, const double&, const double&);
	double get_groesse() const;
	double get_gewicht() const;
	double get_alter() const;
	double get_iq() const;
	bool operator==(const Person&) const;
	bool operator!=(const Person&) const;
	virtual std::ostream& print(std::ostream&) const;
};
std::ostream& operator<<(std::ostream&, const Person&);