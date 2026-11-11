#include "Zombie.hpp"

int main()
{
    Zombie* zombie;
    int     N = 5;

    zombie = zombieHorde(N, "Froo");
    for (int i = 0; i < N; i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
}