#ifndef __PLAYER_CPP__
#define __PLAYER_CPP__

#include "../header/Player.hpp"
#include <iostream>

/*********************************************/

Player::Player()
{
    std::cout << "Création d'une player " << std::endl;
}

/*********************************************/

Player::~Player()
{
    std::cout << "Déstruction d'une personnage " << std::endl;
}

/*********************************************/

int Player::getVie() const
{
    return vie;
}

/*********************************************/

int Player::getDegat() const
{
    return degat;
}

/*********************************************/

std::string Player::getNom()const
{
    return nom;
}

/*********************************************/

void Player::setVie(int vie)
{
    this->vie = vie;
}

/*********************************************/

void Player::setDegat(int degat) 
{
    this->degat = degat;
}

/*********************************************/

void Player::setNom(std::string nom)
{
    this->nom = nom;
}

/*********************************************/

void Player::attackerPlayer(Player& autre)
{
    std::cout << nom << " attack " << autre.nom << " avec degat " << degat <<"\n" << std::endl;
    autre.vie -= degat; 
}

/*********************************************/

bool Player::estVivant() const
{
    return vie > 0;
}

/*********************************************/

void Player::boirePossion(int possion)
{
    vie += possion;
}

/*********************************************/

void Player::presentation() const
{
    std::cout <<"Nom : " << nom << std::endl;
    std::cout <<"Vie : " << vie << std::endl;
    std::cout <<"Degat : " << degat << std::endl;
}

/*********************************************/

#endif