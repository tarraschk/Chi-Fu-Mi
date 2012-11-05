#include "Humain.h"
#include "Coup.h"
#include "Pierre.h"
#include "Papier.h"
#include "Ciseaux.h"
#include <sstream>
#include <string>
#include <iostream>

Humain::Humain() {
};

Humain::Humain(int i) : Joueur(i) {
    
};

Coup& Humain::obtenir_coup() const {
    std::string chaineCoup = "";
    int entierJoue;
    bool saisieReussie = false;
    Coup * coupJoue;
    while(!saisieReussie) {
        std::cout << "Joueur n°" << this->num_joueur + 1 << ", veuillez choisir votre coup (1: Pierre, 2: Papier, 3: Ciseaux) :\n";
        std::cin >> chaineCoup;
        istringstream iss (chaineCoup, istringstream::in);
        iss >> entierJoue;
        switch (entierJoue) {
            case 1:
                coupJoue = new Pierre(*this);
                saisieReussie = true;
                break;
            case 2:
                coupJoue = new Papier(*this);
                saisieReussie = true;
                break;
            case 3:
                coupJoue = new Ciseaux(*this);
                saisieReussie = true;
                break;
            default:
                std::cout << "Erreur, vous n'avez pas tapé un coup reconnu ! Recommencez...\n";
                break;
        }    
    }
    return *coupJoue;
};
