#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>

class Player
{
    public:
        Player();
        ~Player();
        
        int getVie() const;
        int getDegat() const;
        std::string getNom() const;

        void boirePossion(int possion);

        void setVie(int vie);
        void setDegat(int degat);
        void setNom(std::string nom);

        void attackerPlayer(Player& autre);
        bool estVivant() const;
        void presentation()const;

    private:
        int vie;
        int degat;
        std::string nom;
};

#endif