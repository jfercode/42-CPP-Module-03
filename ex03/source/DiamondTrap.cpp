/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:55:11 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/28 16:02:18 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "DiamondTrap " << _name << " arrives!" << std::endl; 
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " leaves!" << std::endl; 
}

void    DiamondTrap::attack(const std::string& target)
{

    FragTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << _name << "Exclaims: I am " << _Name + "!"
              << std::endl;
}
