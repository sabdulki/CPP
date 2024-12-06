/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:03:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/12/06 19:35:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* std::vector<> and std::deque<>

use jhonson algorith and one more
show the time that algorith spend to sort the numbers
accept duplicates

e merge-insert sort algorithm
*/

/*
Steps of the Ford-Johnson Algorithm:
Pairwise comparison: If the number of elements is odd, the last element is left unpaired and handled later.
Sort the pairs: For each pair of elements, sort them.
Merging: Merge the pairs by recursively applying the merging procedure on the new array formed after the pairwise sorting.
Iterate and reduce the problem size: The algorithm reduces the problem size with each merge.
*/

int main(int ac, char** av) 
{
    if (ac < 3)
        return (std::cout << "Invalid number of arguments" << std::endl, 1);
    PmergeMe obj;
    try {
        obj.readInput(ac, av);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    std::cout << "Before: ";
    obj.printArray();
    obj.doSorting();
    std::cout << "After: ";
    obj.printArray();
    
    return 0;
}
