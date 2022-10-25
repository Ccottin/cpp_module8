/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:58:53 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/25 18:53:22 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	ft_test(void)
{
	Span	test;

	std::cout << "try add more number" << std::endl;
	std::cout << "test1 : trying with N = 0, "
	"all should be catched\n\n1. " << std::endl;
	
	try 
	{ 
		test.addMoreNumbers(0);
	} 
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "2. " << std::endl;
	try 
	{ 
		test.addMoreNumbers(1);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "3. " << std::endl;
	try
	{
		test.insertNumbers(0, 0, 0);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "4. " << std::endl;
	try 
	{
		test.insertNumbers(0, 0, 1);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "5. " << std::endl;	
	try
	{
		test.insertNumbers(1, 0, 0);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "6. " << std::endl;	
	try
	{
		test.insertNumbers(0, 1, 0);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "7. " << std::endl;	
	try
	{ 
		test.shortestSpan();
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "8. " << std::endl;	
	try
	{
		test.longestSpan();
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	
	std::cout << "\n\ntrying with N = 45\n1.\n";
	
	Span	test2(10);	
	try
	{
		test2.addMoreNumbers(46);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "2. " << std::endl;
	try
	{
		test2.addMoreNumbers(11);
		test2.printArray();
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "3. " << std::endl;
	try
	{
		test2.addMoreNumbers(-5);
		test2.printArray();
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	std::cout << "4. " << std::endl;
	try
	{
		test2.addMoreNumbers(0);
		std::cout << "is good" << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	test2.addMoreNumbers(10);
	std::cout << "5. " << std::endl;
	try
	{
		test2.addMoreNumbers(0);
		std::cout << "is good" << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }


	std::cout << "insert numbers" << std::endl;
	try
	{
		Span test3(10);
		test3.insertNumbers(2, 2, 2);
		std::cout << "add0passed" << std::endl;
		test3.insertNumbers(8, 2, 2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

int	main(void)
{
	try
	{
		Span	test;

		test.addNumber(1);
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Span	test(10);
		
		test.addNumber(9);
		test.addNumber(6);
		test.addNumber(3);
		test.addNumber(1);
		test.addNumber(3);
		test.addNumber(0);
		std::cout << "longest span = " << test.longestSpan() << std::endl;
		std::cout << "shortest span = " << test.shortestSpan() << std::endl;

		std::cout << "retest" << std::endl << std::endl;
		Span	retest(7);
		
		retest.addMoreNumbers(8);
		retest.printArray();
		std::cout << "longest span = " << retest.longestSpan() << std::endl;
		std::cout << "shortest span = " << retest.shortestSpan() << std::endl << std::endl;
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << std::endl;
	}
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "More test to test filling" << std::endl;
	ft_test();
}
