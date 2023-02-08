/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:58:05 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 15:18:38 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/Animal.hpp"
#include "heads/Cat.hpp"
#include "heads/Dog.hpp"

int main()
{
	Animal* animal_array[100];

	for (int i = 0; i < 50; i++)
		animal_array[i] = new Cat();

	std::cout << "\t----\n";

	for (int i = 0; i < 50; i++)
		animal_array[i]->makeSound();

	std::cout << "\t----\n";

	for (int i = 50; i < 100; i++)
		animal_array[i] = new Dog();

	std::cout << "\t----\n";

	for (int i = 50; i < 100; i++)
		animal_array[i]->makeSound();

	std::cout << "\t----\n";

	for (int i = 0; i < 100; i++)
		delete animal_array[i];
	
}