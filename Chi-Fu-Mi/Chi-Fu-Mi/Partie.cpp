//
//  Partie.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include <iostream>

#include "Partie.h"

Partie::Partie() {};

Partie::Partie(int nbre_j) : nbre_joueurs(nbre_j) {
    for(int i=0;i<nbre_j;i++) {
        //this->joueurs[i] = new Joueur(i);
    }
};

void Partie::jouer_tour() {
    
};

void Partie::afficher_scores() {
    
};