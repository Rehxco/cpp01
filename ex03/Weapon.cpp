/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:33:47 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/05 18:42:02 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string &getType(std::string type)
{
	return (&type);
}

void setType(std::string tmp)
{
	Weapon weapon;

	weapon.type = tmp;
}
