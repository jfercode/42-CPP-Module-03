/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:25:38 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 11:33:05 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(/* args */) : ClapTrap(/* args */)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "Fragtrap " << _Name << " arrives!" << std::endl;
}

FragTrap::FragTrap(const std::string &_name) : ClapTrap(_name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "Fragtrap " << _Name << " arrives!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	this->_Name = copy._Name;
	this->_EnergyPoints = copy._EnergyPoints;
	this->_HitPoints = copy._HitPoints;	
	this->_AttackDamage = copy._AttackDamage;
	std::cout << "Fragtrap " << _Name << " arrives!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{   	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Name = copy._Name;
		this->_EnergyPoints = copy._EnergyPoints;
		this->_HitPoints = copy._HitPoints;	
		this->_AttackDamage = copy._AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _Name << " leaves!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _Name << " request a high fives!" << std::endl;
}
