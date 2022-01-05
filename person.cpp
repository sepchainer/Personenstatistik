#include "person.h"
#include <stdexcept>

Person::Person(const double& groesse, const double& gewicht, const double& alter, const double& iq) : groesse{groesse},
																						 gewicht{gewicht},
																						 alter{ alter },
																						 iq{ iq } 
{
	if (groesse <= 1.0)
		throw std::runtime_error("Die eingegebene Groeße ist zu gering");
	if (gewicht <= 40.0)
		throw std::runtime_error("Das eingegebene Gewicht ist zu gering");
	if (alter <= 18.0)
		throw std::runtime_error("Es werden nur volljährige Personen eingerechnet");
	if (iq <= 90.0)
		throw std::runtime_error("Menschen mit solch einem IQ koennen nicht leben");
}

double Person::get_groesse() const {
	return groesse;
}

double Person::get_gewicht() const {
	return gewicht;
}

double Person::get_alter() const {
	return alter;
}

double Person::get_iq() const {
	return iq;
}

bool Person::operator==(const Person& p) const {
	if (groesse == p.get_groesse() && gewicht == p.get_gewicht() && alter == p.get_alter() && iq == p.get_iq())
		return true;
	else
		return false;
}

bool Person::operator!=(const Person& p) const {
	return !(*this == p);
}

std::ostream& Person::print(std::ostream& o) const {
	o << "Alter: " << alter << "; Groesse: " << groesse << "; Gewicht: " << gewicht << "; IQ: " << iq << ";";
    return o;
}

std::ostream& operator<<(std::ostream& o, const Person&p ){
    return p.print(o);
}