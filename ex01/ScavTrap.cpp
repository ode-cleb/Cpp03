#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constuctor ScavTrap called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->AttackDamage = rhs.AttackDamage;
        this->EnergyPoints = rhs.EnergyPoints;
        this->HitPoints = rhs.HitPoints;
    }
    return *this; // return a reference to the current object
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
        std::cout << this->name << " is dead" << std::endl;
    else if (this->EnergyPoints == 0)
        std::cout << this->name << "had no energy" << std::endl;
    else
    {
        this->EnergyPoints--;
        std::cout << this->name << " attacked like a true ScavTrap " << target << ", causing " << this->AttackDamage << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << this->name << " is now in Gate Keeper mode." << std::endl;
}