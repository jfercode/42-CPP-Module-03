/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:55:11 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 16:04:11 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap " << _name << " arrives!" << std::endl; 
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    this->_Name = copy._Name;
    this->_name = copy._name;
    this->_AttackDamage = copy._AttackDamage;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_HitPoints = copy._HitPoints;
    std::cout << "DiamondTrap " << _name << " arrives!" << std::endl; 
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_Name = copy._Name;
        this->_name = copy._name;
        this->_AttackDamage = copy._AttackDamage;
        this->_EnergyPoints = copy._EnergyPoints;
        this->_HitPoints = copy._HitPoints;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " leaves!" << std::endl; 
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << _name << " exclaims: I am " << _Name + "!"
              << std::endl;
}
