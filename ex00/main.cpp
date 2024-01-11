#include "ClapTrap.hpp"

int main()
{
    ClapTrap John("John");
    ClapTrap Steve("Steve");

    Steve.attack("John");
    John.takeDamage(Steve.getAttackDamage());
    John.beRepaired(Steve.getAttackDamage());
    John.attack("Steve");
    Steve.takeDamage(John.getAttackDamage());
    Steve.beRepaired(John.getAttackDamage());
    std::cout << "John's energy: " << John.getEnergyPoints() << std::endl;
    std::cout << "Steve's energy: " << Steve.getEnergyPoints() << std::endl;
}