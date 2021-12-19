//
// Created by prg-user on 19.12.21.
//
#include <iostream>
#include "person.h"
#include "personenliste.h"
int main()
{
    // Groeße, Gewicht, Alter, IQ
    try
    {
        std::vector<Person> personen{ { 1.80, 72.5, 32, 108.3 }, { 1.82, 80.5, 19, 110 }, { 1.90, 110, 46, 122.4 }, { 1.72, 62.5, 22, 130.8 } };
        for (const auto& person : personen) {
            std::cout << person << "\n";
        }
    }
    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
    }
    return 0;
}