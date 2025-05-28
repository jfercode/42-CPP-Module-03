/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:30:26 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/28 14:22:51 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int main()
{
    ClapTrap def = ClapTrap();
    ClapTrap jack = ClapTrap("Jack");
    
    def.attack("jack");
    jack.takeDamage(1);
    jack.beRepaired(1);
    jack.attack("def");
    def.takeDamage(10);
    return (0);
}