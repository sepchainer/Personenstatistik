//
// Created by prg-user on 19.12.21.
//
#include <vector>
#include <string>
#include "patient.h"

Patient::Patient(const double& groesse, const double& gewicht, const double& alter, const double& iq,
                 const int& svnr, const Gesundheitszustand& ges_zustand, const std::string& krankheit) :
                 Person(groesse, gewicht, alter, iq),
                 svnr{svnr}, ges_zustand{ges_zustand}, krankheit{krankheit} {

}

std::ostream& Patient::print(std::ostream& o) const {
    Person::print(o);
    o << " SVNR: " << svnr << "; Gesundheitszustand: ";
    switch (ges_zustand){
        case Gesundheitszustand::Krank: o << "Krank; ";
        case Gesundheitszustand::Gesund: o << "Gesund; ";
    }
    o << "Krankheit: " << krankheit << ";";
}

std::ostream& operator<<(std::ostream& o, const Patient& p) {
    return p.print(o);
}
