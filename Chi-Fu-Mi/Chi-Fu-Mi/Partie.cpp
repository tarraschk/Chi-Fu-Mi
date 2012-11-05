//
//  Partie.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include <iostream>

#include "Partie.h"
#include "Coup.h"
#include "Pierre.h"
#include "Papier.h"
#include "Ciseaux.h"
#include "Joueur.h"
#include "Humain.h"
#include "IA.h"

Partie::Partie() {};

Partie::Partie(int nbre_j) : nbre_joueurs(nbre_j) {
    for(int i=0;i<nbre_j;i++) {
        this->joueurs[i] = new Humain(i);
    }
};

void Partie::jouer_tour() {
    for(int i=0; i<this->nbre_joueurs ; i++) {
        this->coup_joue[i] = &this->joueurs[i]->obtenir_coup();
    }
    // Pour le moment, uniquement avec deux joueurs !
    if(*this->coup_joue[0] < *this->coup_joue[1]) {
        this->scores[1] = this->scores[1]+1;
        std::cout << "Le joueur 2 a gagné en jouant " << this->coup_joue[1]->type() << std::endl;
    }
    else if(*this->coup_joue[1] < *this->coup_joue[0]) {
        this->scores[0] = this->scores[0]+1;
        std::cout << "Le joueur 1 a gagné en jouant " << this->coup_joue[0]->type() << std::endl;
    }
    else {
        std::cout << "Il y a eu égalité !" << std::endl;
    }
    
};

void Partie::afficher_scores() {
    std::cout << "Scores :\n";
    std::cout << "   ";
    for(int i=0; i<this->nbre_joueurs ; i++) {
        std::cout << "J" << i+1 << " : " << this->scores[i];
        if(i<this->nbre_joueurs-1) {
            std::cout << " - ";
        }
        else {
            std::cout << "\n";
        }
    }
};

void Partie::afficher_typeCoupsJoues() {
    std::cout << "Coups joués :\n";
    std::cout << "   Pierre : " << Pierre::nombre << "\n";
    std::cout << "   Papier : " << Papier::nombre << "\n";
    std::cout << "   Ciseaux : " << Ciseaux::nombre << "\n";
};