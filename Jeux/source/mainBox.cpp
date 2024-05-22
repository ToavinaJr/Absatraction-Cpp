#include "../header/JeuxBox.hpp"

int main()
{
    JeuxBox* jeuxBox = new JeuxBox;

    jeuxBox->players[0].setNom("Bônanga");
    jeuxBox->players[1].setNom("Darafify");

    jeuxBox->run();

    delete jeuxBox;

    return 0;
}