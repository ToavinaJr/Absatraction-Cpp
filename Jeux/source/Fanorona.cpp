#ifndef __FANORONA_CPP__
#define __FANORONA_CPP__

#include "../header/Fanorona.hpp"
#include <iostream>

Fanorona::Fanorona()
{
    std::cout << "Constructeur fanorona " << std::endl;
}

Fanorona::~Fanorona()
{
    std::cout << "Destructeur fanorona " << std::endl;

}

void Fanorona::start()
{
    for (int i(0); i<3; i++)
    {
        pionsBlanc[i] = i;
        pionsNoir[i] = i+6;
    }

    gameOver = false;
    statusPause = false;
    tourBlanc = true;
}

/******************************************/

void Fanorona::restart()
{
    start();
}

/******************************************/

void Fanorona::menu()
{
    std::cout << "\nEntrer votre choix " << std::endl;
    std::cout   << "\t[C] : Commencer le jeux \n"
                << "\t[P] : Pauser le jeux \n"
                << "\t[R] : Recommencer le jeux\n"
                << "\t[Q] : Quitter le jeux \n"
                << std::endl;
}

/******************************************/

void Fanorona::quit()
{
    gameOver = true;
}

/******************************************/

void Fanorona::pause()
{
    statusPause = !statusPause;
    std::cout << (statusPause ? "Pause " : "Play") << std::endl;
}

/******************************************/

void Fanorona::play()
{
    pause();
}

/******************************************/

void Fanorona::display()const
{
    std::cout << "Pions noirs : ";
    for (int i(0); i < 3; i++)
        std::cout << pionsNoir[i] ;
    
    std::cout << std::endl;

    std::cout << "Blancs noirs : ";
    for (int i(0); i < 3; i++)
        std::cout << pionsBlanc[i] ;
    std::cout << std::endl;
}

/******************************************/

char Fanorona::getInputChar() const
{
    char input;
    std::cin >> input;
    return input;
}

/******************************************/


int Fanorona::getInput() const
{
    int input;
    std::cin >> input;
    return input;
}

/******************************************/
void Fanorona::run()
{
    start();
    char inputChar;
    int depart, arrivee;
    menu();

    while(!gameOver)
    {
        inputChar = getInputChar();
        std::cin.ignore();
        switch (inputChar)
        {
            case 'c':
                if (tourBlanc)
                {
                    std::cout << "Entree le Depart " << std::endl;
                    depart = getInput();
                    std::cin.ignore();
                    if ( depart == pionsBlanc[0] || depart == pionsBlanc[1] || depart == pionsBlanc[2] )
                    {
                        std::cout << "Arrivée " << std::endl;
                        arrivee = getInput();
                        std::cin.ignore();

                        if ( arrivee == pionsNoir[0] || depart == pionsNoir[1] || depart == pionsNoir[2])
                        {
                            std::cout << "Il y a déja un pion noir au position " << arrivee << std::endl;
                        }
                        else
                        {
                            std::cout << "Deplacement de pion noir de " << depart << " à " << arrivee << std::endl;
                            if ( pionsBlanc[0] == depart )
                            {
                                pionsBlanc[0] = arrivee;
                            }
                            else if ( pionsBlanc[1] == depart ) 
                            {
                                pionsBlanc[1] = arrivee;
                            }
                            else 
                            {
                                pionsBlanc[2] = arrivee;
                            }
                        }
                    }
                    else
                    {
                        std::cout << "Il n'y a pas de pion blanc a la positon " << depart << std::endl;
                    }
                }
                else
                {
                    depart = getInput();
                    std::cout << "Depart " << std::endl;

                    if ( depart == pionsNoir[0] || depart == pionsNoir[1] || depart == pionsNoir[2] )
                    {
                        std::cout << "Arrivée " << std::endl;

                        if ( arrivee == pionsBlanc[0] || depart == pionsBlanc[1] || depart == pionsBlanc[2])
                        {
                            std::cout << "Il y a déja un pion blanc au position " << arrivee << std::endl;
                        }
                        else
                        {
                            std::cout << "Deplacement de pion blanc de " << depart << " à " << arrivee << std::endl;
                        }
                    }
                    else
                    {
                        std::cout << "Il n'y a pas de pion noir a la positon " << depart << std::endl;
                        if ( pionsNoir[0] == depart )
                        {
                            pionsNoir[0] = arrivee;
                        }
                        else if ( pionsNoir[1] == depart ) 
                        {
                            pionsNoir[1] = arrivee;
                        }
                        else 
                        {
                            pionsNoir[2] = arrivee;
                        }
                    }
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
    }
}

#endif