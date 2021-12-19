//
// Created by prg-user on 19.12.21.
//

#include "patient.h"

Patient::Patient(const int & svnr, const Gesundheitszustand ges_zustand, const std::string krankheit) : svnr{svnr},
ges_zustand{ges_zustand}, krankheit{krankheit} {

}