#ifndef __JEUXBOX_CPP__
#define __JEUXBOX_CPP__

#include "../header/JeuxBox.hpp"
#include <iostream>
#include <string>

/**********************************/

JeuxBox::JeuxBox()
{
    std::cout << "Constructeur d'un jeux de box " << std::endl;
}

/**********************************/

JeuxBox::~JeuxBox()
{
    quit();
    std::cout << "Destructeur d'un jeux de box " << std::endl;
}

/**********************************/

void JeuxBox::start()
{
    std::cout << "Commencer le jeu " << std::endl;
    state = true;
    for (int i(0); i<2; i++)
    {
        std::string nom = "P" + std::to_string(i);
        if ( players[i].getNom() == "" )
            players[i].setNom(nom);
        
        players[i].setVie(100);
        players[i].setDegat(5);
    }
}

/**********************************/

void JeuxBox::restart()
{
    quit();
    start();
}

/**********************************/

void JeuxBox::quit()
{
    std::cout << "Quitter le jeux " << std::endl;
    etat = false;
}

/**********************************/

void JeuxBox::pause()
{
    state = !state;
    std::cout << (state ? "Pause": "Play") << std::endl;

}

/**********************************/

void JeuxBox::play()
{
    std::cout << "Pause" << std::endl;
}

/**********************************/

void JeuxBox::run()
{
    start();
    menu();
    char input = getInput();
    input = tolower(input);

    while ( players[0].getVie() && players[1].getVie() && etat)
    {
        int rand = std::rand() % 2;
        
        // std::cin.ignore();

        switch(input)
        {
            case 'c':
                if (!state)
                {
                    if ( rand % 2 == 0 )
                    {
                        players[0].attackerPlayer(players[1]);
                    }
                    else
                    {
                        players[1].attackerPlayer(players[0]);
                    }

                    for (int i(0); i<2; i++)
                    {
                        players[i].presentation();
                    }
                }
                else 
                {
                    std::cout << "Le jeu est en pause " << std::endl;
                }
                break;
            
            case 'p':
                pause();
                break;
            
            case 'r':
                restart();
                break;
            
            case 'q':
                return;
                break;
            
            default :
                std::cout << "Choix invalid" << std::endl;
                break;
        }
        menu();
        input = getInput();
        input = tolower(input);
    }

    std::string nomGagnant = players[0].getVie() > 0 ? players[0].getNom() : players[1].getNom();
    std::string nomPerdant = players[0].getVie() < 0 ? players[0].getNom() : players[1].getNom();

    std::cout << "\nFin du jeux " << std::endl;
    std::cout << "Gagnant " << nomGagnant << std::endl;
    std::cout << "Perdant " << nomPerdant << std::endl << std::endl;
}

/**********************************/

void JeuxBox::menu()
{
    std::cout << "\nEntrer votre choix " << std::endl;
    std::cout   << "\t[C] : Commencer le jeux \n"
                << "\t[P] : Pauser le jeux \n"
                << "\t[R] : Recommencer le jeux\n"
                << "\t[Q] : Quitter le jeux \n"
                << std::endl;
}

/**********************************/

char JeuxBox::getInput()const
{
    char input;
    std::cin >> input;
    return input;
}

/**********************************/

bool JeuxBox::getEtat() const 
{
    return etat;
}

/**********************************/

void JeuxBox::setEtat(bool etat)
{
    this->etat = etat;
}

/**********************************/

#endif