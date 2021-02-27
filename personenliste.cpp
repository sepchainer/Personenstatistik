#include "personenliste.h"

Personenliste::Personenliste(const std::vector<Person> & personenliste) : personenliste{personenliste} {}

void Personenliste::person_hinzufuegen(const Person& p) {
	for (size_t i{ 0 }; i < personenliste.size()-1; ++i) {
		if (p == personenliste.at(i))
			return;
	}
	personenliste.push_back(p);
}

void Personenliste::sort_personenliste(const Sort_eigenschaften& sort_eigenschaft) {
	// Groeße, Gewicht, Alter, IQ
	switch (sort_eigenschaft) {
	case Sort_eigenschaften::Groesse: {
			size_t index_min{ 0 };
			for (size_t i{ 0 }; i < personenliste.size() - 1; ++i) {
				index_min = i;
				for (size_t j{ i + 1 }; j < personenliste.size(); ++j) {
					if (personenliste.at(j).get_groesse() < personenliste.at(index_min).get_groesse())
						index_min = j;
					std::swap(personenliste.at(i), personenliste.at(index_min));
				}
			}
			break;
		}
	case Sort_eigenschaften::Gewicht: {
			size_t index_min{ 0 };
			for (size_t i{ 0 }; i < personenliste.size() - 1; ++i) {
				index_min = i;
				for (size_t j{ i + 1 }; j < personenliste.size(); ++j) {
					if (personenliste.at(j).get_gewicht() < personenliste.at(index_min).get_gewicht())
						index_min = j;
					std::swap(personenliste.at(i), personenliste.at(index_min));
				}
			}
			break;
		}
		case Sort_eigenschaften::Alter: {
			size_t index_min{ 0 };
			for (size_t i{ 0 }; i < personenliste.size() - 1; ++i) {
				index_min = i;
				for (size_t j{ i + 1 }; j < personenliste.size(); ++j) {
					if (personenliste.at(j).get_alter() < personenliste.at(index_min).get_alter())
						index_min = j;
					std::swap(personenliste.at(i), personenliste.at(index_min));
				}
			}
			break;
		}
		case Sort_eigenschaften::IQ: {
			size_t index_min{ 0 };
			for (size_t i{ 0 }; i < personenliste.size() - 1; ++i) {
				index_min = i;
				for (size_t j{ i + 1 }; j < personenliste.size(); ++j) {
					if (personenliste.at(j).get_iq() < personenliste.at(index_min).get_iq())
						index_min = j;
					std::swap(personenliste.at(i), personenliste.at(index_min));
				}
			}
			break;
		}
	}
}

std::ostream& Personenliste::print(std::ostream& o) const {
	bool first{ true };
	for (const auto& person : personenliste) {
		o << person << '\n';
	}
	return o;
}

std::ostream& operator<<(std::ostream& o, const Personenliste& pl) {
	return pl.print(o);
}
