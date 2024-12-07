
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <sstream>
#include <ctime> // For time tracking
#include <list>
#include <vector>
#include <deque>

class PmergeMe
{
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;
		size_t size;
	public:
		PmergeMe();
		~PmergeMe();

		//helpers 
		size_t getSize() const;
		std::vector<int>& getVector();
		std::deque<int>& getDeque();
		void printArray() const;
		int readInput(int amount, char** argumnets);

		//sorting
		void doSorting();

		template <typename T>
		void fordJohnsonSort(T& arr);

		template <typename T>
		void merge(T& arr, int start, int mid, int end); 
};

#include "PmergeMe.tpp"

#endif