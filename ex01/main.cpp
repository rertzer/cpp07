/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:35:42 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/12 10:16:22 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	iter(T * array, unsigned int const size, void (*fun)(T &))
{
	for (unsigned int i = 0; i < size; i++)
		fun(array[i]);
}

template<typename T>
void	addone(T & a)
{
	a++;
}

template<typename T>
void	print(T & a)
{
	std::cout << a << " ";
}

int	main(void)
{
	int	array1[] = {1, 2, 3, 4, 5};
	iter<int>(array1, 5, &print);
	std::cout << std::endl;
	iter<int>(array1, 5, &addone);
	iter<int>(array1, 5, &print);
	std::cout << std::endl;

	char	array2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	iter<char>(array2, 7, &print);
	std::cout << std::endl;
	iter<char>(array2, 7, &addone);
	iter<char>(array2, 7, &print);
	std::cout << std::endl;

	return 0;
}
