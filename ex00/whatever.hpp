/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:22:25 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/12 09:24:04 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template<typename T> void	swap(T & a, T & b);
template<typename T> T const &	min(T const & a, T const & b);
template<typename T> T const &	max(T const & a, T const & b);

#endif
