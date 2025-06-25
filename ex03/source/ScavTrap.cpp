/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:57:12 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 11:28:10 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */) : ClapTrap()
{
    std::cout << "ScavTrap " << _Name << " arrives!"
              << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
    std::cout << "ScavTrap " << _Name << " arrives!"
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    this->_AttackDamage = copy._AttackDamage;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_HitPoints = copy._HitPoints;
    this->_Name = copy._Name;

    std::cout << "ScavTrap " << _Name << " arrives!"
              << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
   	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_Name = copy._Name;
        this->_AttackDamage = copy._AttackDamage;
        this->_EnergyPoints = copy._EnergyPoints;
        this->_HitPoints = copy._HitPoints;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " leaves!" 
              << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _Name << " is now on Gate keeper mode!"
              << std::endl;
}
