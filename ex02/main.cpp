#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap John("John");
    FragTrap Steve("Steve");
    ScavTrap Bob("Bob");

    Steve.attack("John");
    John.takeDamage(Steve.getAttackDamage());
    John.beRepaired(Steve.getAttackDamage());
    John.attack("Steve");
    Steve.takeDamage(John.getAttackDamage());
    Steve.beRepaired(John.getAttackDamage());
    Bob.guardGate();
    Bob.attack("Steve");
    Steve.takeDamage(Bob.getAttackDamage());
    Steve.beRepaired(Bob.getAttackDamage());
    std::cout << "Bob has " << Bob.getEnergyPoints() << " Energy Points left." << std::endl;
    Steve.highFiveGuys();
}