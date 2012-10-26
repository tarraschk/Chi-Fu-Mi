#ifndef JOUEUR_H
#define JOUEUR_H


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

#endif // JOUEUR_H
