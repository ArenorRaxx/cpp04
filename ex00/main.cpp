/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:58:05 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 14:44:21 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/Animal.hpp"
#include "heads/Cat.hpp"
#include "heads/Dog.hpp"
#include "heads/WrongAnimal.hpp"
#include "heads/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\t----\n";

	const WrongAnimal *wrongmeta = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	const WrongCat *cat = new WrongCat();

	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	wrongmeta->makeSound();
	wrongcat->makeSound();
	cat->makeSound();

	delete wrongmeta;
	delete wrongcat;
	delete cat;

	return 0;
}