/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:21:22 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/12 10:37:00 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class	Array
{
	public:
		Array();
		Array(unsigned int const size);
		Array(Array const &);
		~Array();

		Array &	operator=(Array const & rhs);
		T &		operator[](unsigned int const i);

		unsigned int const	size() const;
	
	private:
		unsigned int const	n;
		T *					array;
};
#endif
