/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:14:52 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/23 22:30:16 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char	*NotFoundException::what () const throw ()
{
	return ("No occurence of number in container");
}

int	main(void)
{
	std::list<int> lst(10, 41);
	try
	{
		std::list<int>::iterator i = easyfind(lst, 42);
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		lst.push_back(42);
		std::list<int>::iterator i = easyfind(lst, 42);
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::vector<int>(
}
