#ifndef JOUEUR_H
#define JOUEUR_H

#include "Coup.h"

class Joueur
{
    public:
        int num_joueur;
        int score;
        Joueur();
        Joueur(int);
        virtual Coup& obtenir_coup() const = 0;
        //void incrementer_score();
    protected:
    private:
};

#endif // JOUEUR_H
