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
#include "Joueur.h"

using namespace std;

int main (int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    Coup * papier = new Papier();
    Coup * ciseaux = new Ciseaux();
    Coup * pierre = new Pierre();
    
    std::cout << papier->type();
    std::cout << "\n";
    std::cout << ciseaux->type();
    std::cout << "\n";
    std::cout << pierre->type();
    std::cout << "\n";
    if(*pierre==*ciseaux) {
        std::cout << "Pierre et Ciseaux sont égaux!";
    }
    else{
        std::cout << "Pierre et Ciseaux sont différents!";
    }
    std::cout << "\n";
    if(*pierre==*pierre) {
        std::cout << "Pierre et Pierre sont égaux!";
    }
    else{
        std::cout << "Pierre et Pierre sont différents!";
    }
    std::cout << "\n";
    std::cout << *pierre;
    std::cout << "\n";
    return 0;
}

