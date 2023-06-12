/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:21:22 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/12 16:10:53 by rertzer          ###   ########.fr       */
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
		Array(unsigned int sz);
		Array(Array<T> const & arr);
		~Array();

		Array<T> &	operator=(Array<T> const & rhs);
		T &			operator[](unsigned int i);

		unsigned int size() const;
	
	private:

		class	OutOfRangeException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array::exception: Index is out of range");
				}
		};

		unsigned int const	n;
		T *					array;
};

#include <Array.cpp>
#endif
