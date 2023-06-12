/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:31:00 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/12 10:39:05 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(): n(0), array(0)
{

}

Array::Array(unsigned int const size): n(size)
{
	try
	{
		array = new[n];
	}
	catch(std::exception e)
	{
		std::cout << "Array construction failed. " << e.what() << std::endl;
	}
}
