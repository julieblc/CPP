#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie* zombie;

    randomChump("Fro");
    zombie = newZombie("Braz");
    zombie->announce();
    delete zombie;
    return (0);
}