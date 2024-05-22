#ifndef __FANORONA_HPP__
#define __FANORONA_HPP__

#include "Jeux.hpp"

class Fanorona : public Jeux
{
    public:
        Fanorona();
        ~Fanorona();

        void start();
        void restart();
        void quit();
        void pause();
        void play();

        void display()const;
        char getInputChar()const;
        int getInput()const;
        
        void run();
        void menu();

    private:
        int pionsNoir [3];
        int pionsBlanc[3];
        bool gameOver;
        bool statusPause;
        bool tourBlanc;
};
#endif