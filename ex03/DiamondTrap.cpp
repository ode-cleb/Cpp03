#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->ClapTrap::name = name + "_clap_trap";
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints= ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "Constuctor Diamond called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor Diamond called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "Copy constructor Diamond called" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != &rhs)
    {
        this->AttackDamage = rhs.AttackDamage;
        this->EnergyPoints = rhs.EnergyPoints;
        this->HitPoints = rhs.HitPoints;
    }
    return *this; // return a reference to the current object
}

void    DiamondTrap::whoAmi()
{
    std::cout << "the name of diamond is: " << this->name << std::endl;
    std::cout << "the name of the claptrap is: " << ClapTrap::name << std::endl;
}