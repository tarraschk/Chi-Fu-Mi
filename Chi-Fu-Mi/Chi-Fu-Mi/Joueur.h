#ifndef Chi_Fu_Mi_Joueur_h
#define Chi_Fu_Mi_Joueur_h

#include "Coup.h"

class Joueur
{
    public:
        int num_joueur;
        Joueur();
        Joueur(int);
        virtual Coup& obtenir_coup() const = 0;
    protected:
    private:
};

#endif // Chi_Fu_Mi_Joueur_h
