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
    Patient(const int&, const Gesundheitszustand = Gesundheitszustand::Gesund, const std::string = "keine");

};


#endif //PERSONENSTATISTIK_PATIENT_H
