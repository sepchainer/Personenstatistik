//
// Created by prg-user on 19.12.21.
//
#include <string>
#include "person.h"
#ifndef PERSONENSTATISTIK_PATIENT_H
#define PERSONENSTATISTIK_PATIENT_H

enum class Gesundheitszustand {Krank, Gesund};

class Patient : public Person{
    int svnr;
    Gesundheitszustand ges_zustand;
    std::string krankheit;
public:
    Patient(const double&, const double&, const double&, const double&,
            const int&, const Gesundheitszustand& = Gesundheitszustand::Gesund, const std::string& = "keine");
    std::ostream& print(std::ostream&) const;
};;
std::ostream& operator<<(std::ostream&, const Patient&);
#endif //PERSONENSTATISTIK_PATIENT_H
