#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Constuctor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constuctor FragTrap " << this->name << " called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor " << this->name << " called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
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

void    FragTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
        std::cout << this->name << " is dead" << std::endl;
    else if (this->EnergyPoints == 0)
        std::cout << this->name << "had no energy" << std::endl;
    else
    {
        this->EnergyPoints--;
        std::cout << this->name << " attacked like a true FragTrap " << target << ", causing " << this->AttackDamage << std::endl;
    }
}

void    FragTrap::highFiveGuys()
{
    std::cout << this->name << " is doing a High five." << std::endl;
}