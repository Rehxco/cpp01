/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:34:12 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/05 18:41:08 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <cstdlib>
# include <iomanip>
# include <iostream>

class Weapon
{
  private:
	std::string type;
};

std::string &getType(std::string type);
void setType(std::string tmp);
#endif