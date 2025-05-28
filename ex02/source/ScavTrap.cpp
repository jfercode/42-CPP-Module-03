/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:57:12 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/28 14:46:07 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */) : ClapTrap()
{
	std::cout << "ScavTrap " << _Name << " arrives!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << _Name << " arrives!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _Name << " leaves!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _Name << " is now on Gate keeper mode!" << std::endl;
}
