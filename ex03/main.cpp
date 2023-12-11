#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Edgar("Edgar");
    ScavTrap Nico("Nico");

    Edgar.whoAmi();
    Edgar.attack("Nico");
    Nico.takeDamage(Edgar.getAttackDamage());
    Nico.attack("Edgar");
    Edgar.takeDamage(Nico.getAttackDamage());
    
    std::cout << "Edgar has " << Edgar.getHitPoints() << " PV" << std::endl;
    std::cout << "Nico has " << Nico.getHitPoints() << " PV" << std::endl;
}