#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string zombieName)
{
    name = zombieName;
}

Zombie::~Zombie()
{
    std::cout << name << ": Destroyed with success." << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

