#ifndef HUMAIN_H
#define HUMAIN_H

#include "Joueur.h"
#include "Coup.h"

class Humain :public Joueur {
public:
    Humain();
    Humain(int);
    virtual Coup& obtenir_coup() const;
};

#endif // HUMAIN_H
