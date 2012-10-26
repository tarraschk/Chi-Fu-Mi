//
//  main.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include <iostream>
#include "Coup.h"
#include "Papier.h"
#include "Ciseaux.h"
#include "Pierre.h"

using namespace std;

int main (int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    Coup * papier = new Papier();
    Coup * ciseaux = new Ciseaux();
    Coup * pierre = new Pierre();
    Coup * pierre2 = new Pierre();
    
    std::cout << papier->type();
    std::cout << ciseaux->type();
    std::cout << pierre->type();
    if(pierre==ciseaux) {
        std::cout << "Pierre et Ciseaux sont égaux!";
    }
    else{
        std::cout << "Pierre et Ciseaux sont différents!";
    }
    if(pierre==pierre2) {
        std::cout << "Pierre et Pierre2 sont égaux!";
    }
    else{
        std::cout << "Pierre et Pierre2 sont différents!";
    }
    return 0;
}

