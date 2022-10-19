/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 03:28:03 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    
    std::cout << "Default constructor for Brain called" << std::endl;
    
}

Brain::Brain(Brain const &copy) {
    
    *this = copy;
    std::cout << "Copy constructor for Brain called" << std::endl;
    
}

Brain &Brain::operator=(Brain const &copy) {
    
    if (this == &copy)
		return (*this);
        
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
        
    std::cout << "Assignement operator called" << std::endl;
    return *this;
    
}
    
Brain::~Brain() {
    
    std::cout << "Destructor for Brain called" << std::endl;
    
}
