/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:25:56 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/25 14:58:49 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <list>
#include <map>
#include <queue>

//creer un test pour array en non dynamique qvec taille fixes

void	ft_deque(void)
{
	std::deque<int> keuhu;

	keuhu.push_back(5);
	keuhu.push_back(17);
	std::cout << keuhu.back() << std::endl;
	keuhu.pop_back();
	std::cout << keuhu.size() << std::endl;
	keuhu.push_back(3);
	keuhu.push_back(5);
	keuhu.push_back(737);
	//[...]
	keuhu.push_back(0);
	std::deque<int>::iterator it = keuhu.begin();
	std::deque<int>::iterator ite = keuhu.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::deque<int> s(keuhu);
}

void	ft_list(void)
{
	std::list<int>	listy;

	listy.push_back(5);
	listy.push_back(17);
	std::cout << listy.back() << std::endl;
	listy.pop_back();
	std::cout << listy.size() << std::endl;
	listy.push_back(3);
	listy.push_back(5);
	listy.push_back(737);
	//[...]
	listy.push_back(0);
	std::list<int>::iterator it = listy.begin();
	std::list<int>::iterator ite = listy.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(listy);
}

void	ft_vector(void)
{
	std::vector<int>	vectore;

	vectore.push_back(5);
	vectore.push_back(17);
	std::cout << vectore.back() << std::endl;
	vectore.pop_back();
	std::cout << vectore.size() << std::endl;
	vectore.push_back(3);
	vectore.push_back(5);
	vectore.push_back(737);
	//[...]
	vectore.push_back(0);
	std::vector<int>::iterator it = vectore.begin();
	std::vector<int>::iterator ite = vectore.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::vector<int> s(vectore);
}


int		main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\nVector test\n" << std::endl;
//	ft_vector();
//	ft_list();
//	ft_deque();
	
	MutantStack<int> s(mstack);
	
	s.push(21435);
	MutantStack<int>::iterator itt = mstack.begin();
	MutantStack<int>::iterator itte = mstack.end();
	++itt;
	--itt;
	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		++itt;
	}

	mstack = s;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	
	return 0;
}
