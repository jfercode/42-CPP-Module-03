/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:32:00 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 11:05:48 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */) 
	: _Name("ClapTrap"), _HitPoints(100), _EnergyPoints(50), _AttackDamage(20) 
{
	std::cout << "ClapTrap " << _Name << " arrives!"
			  << std::endl;
}

ClapTrap::ClapTrap(const std::string& _name)
	: _Name(_name), _HitPoints(100), _EnergyPoints(50), _AttackDamage(20)
{
	std::cout << "ClapTrap " << _Name << " arrives!"
			  << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	this->_Name = copy._Name;
	this->_HitPoints = copy._HitPoints;
	this->_EnergyPoints = copy._EnergyPoints;
	this->_AttackDamage = copy._AttackDamage;
	std::cout << "ClapTrap " << _Name << " arrives!"
			  << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Name = copy._Name;
		this->_HitPoints = copy._HitPoints;
		this->_EnergyPoints = copy._EnergyPoints;
		this->_AttackDamage = copy._AttackDamage;
	}
	return (*this);
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

int		ClapTrap::getAttackDamage(void)
{
	return(this->_AttackDamage);
}

int		ClapTrap::getEnergyPoints(void)
{
	return(this->_EnergyPoints);
}

int		ClapTrap::getHitPoints(void)
{
	return(this->_HitPoints);
}