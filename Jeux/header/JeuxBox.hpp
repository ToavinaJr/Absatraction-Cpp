#ifndef __JEUXBOX_HPP__
#define __JEUXBOX_HPP__

#include "./Jeux.hpp"
#include "./Player.hpp"

class JeuxBox : public Jeux
{
    public:
        JeuxBox();
        ~JeuxBox();

        void start();
        void restart();
        void quit();
        void pause();
        void play();

        Player players[2];

        void setEtat(bool etat );
        bool getEtat() const;
        void run();
        void menu();
        char getInput()const;

    private:
        bool etat = true;
        bool state = false;
};

#endif