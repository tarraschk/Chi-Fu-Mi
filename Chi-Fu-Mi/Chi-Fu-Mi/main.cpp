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

using namespace std;

int main (int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    Papier * papier = new Papier();
    Ciseaux * ciseaux = new Ciseaux();
    Pierre * pierre = new Pierre();
    
    std::cout << papier->type();
    return 0;
}

