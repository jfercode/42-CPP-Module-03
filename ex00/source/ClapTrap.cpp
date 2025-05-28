/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:32:00 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/28 14:23:04 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */) 
	: _Name("ClapTrap"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
	std::cout << "ClapTrap " << _Name << " arrives!"
			  << std::endl;
}

ClapTrap::ClapTrap(const std::string _name)
	: _Name(_name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap " << _Name << " arrives!"
			  << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _Name << " leaves!"
			  << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _Name << " attacks " << target 
			  << ", causing " << _AttackDamage << " points of damage!"
			  << std::endl;
	this->_EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints-=amount;
	std::cout << "ClapTrap " << _Name << " takes " << amount 
			  << " damage! ";
	if (_HitPoints <= 0)
		std::cout << "It is K.O now!" << std::endl;
	else
		std::cout << "Hp is now " << _HitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_HitPoints+=amount;
	std::cout << "ClapTrap" << _Name << " repairs " << amount
			  << " points! HP is now " << _HitPoints << std::endl;
}
