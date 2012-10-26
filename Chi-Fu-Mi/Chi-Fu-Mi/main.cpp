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
    
    std::cout << papier->type();
    std::cout << ciseaux->type();
    std::cout << pierre->type();
    return 0;
}

