//
//  main.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include <sstream>
#include <string>
#include <iostream>
#include "Coup.h"
#include "Papier.h"
#include "Ciseaux.h"
#include "Pierre.h"
#include "Joueur.h"
#include "Partie.h"

using namespace std;

int main (int argc, const char * argv[])
{
    std::cout << "Bienvenue dans notre super jeu Pierre Papier Ciseaux!\n";
    std::string chaine_nbJoueurs = "";
    int nbJoueurs;
    std::cout << "Veuillez saisir le nombre de joueurs :\n";
    std::cin >> chaine_nbJoueurs;
    istringstream iss_nbJoueurs (chaine_nbJoueurs, istringstream::in);
    iss_nbJoueurs >> nbJoueurs;
    Partie * premierePartie = new Partie(nbJoueurs);
    for(int i=0;i<5;i++) {
        std::cout << "Tour n°" << i + 1 << "\n";
        premierePartie->jouer_tour();
        premierePartie->afficher_scores();
    }
    premierePartie->afficher_typeCoupsJoues();
    return 0;
}

