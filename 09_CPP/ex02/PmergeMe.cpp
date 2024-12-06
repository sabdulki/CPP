
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

//copy constructor and copy assignment operator constructor
PmergeMe::~PmergeMe(){}

size_t PmergeMe::getSize() const
{
	return (size);
}

std::vector<int>& PmergeMe::getVector()
{
	return (_vector);
}

std::deque<int>& PmergeMe::getDeque()
{
	return (_deque);
}

void PmergeMe::printArray() const
{
	if (_vector.empty() || _deque.empty())
	{
		std::cout << "Error: empry containers" << std::endl;
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		if (_vector[i] != _deque[i])
		{
			std::cout << "_vector and _deque elements are nor equal at index " << i << std::endl;
			return ;
		}
		std::cout << _vector[i] << " ";
	}
    std::cout << std::endl;
}

int PmergeMe::readInput(int amount, char** argumnets)
{
	for (int i = 1; i < amount; i++) 
    {
		int value;
		std::istringstream iss(argumnets[i]);
		if (iss >> value) 
		{
			_vector.push_back(value);
			_deque.push_back(value);
		} 
		else
			throw (std::runtime_error("Error: wrong input"));
	}
	if (_vector.size() == _deque.size())
	{
		size = _vector.size();
		// std::cout << "size: " << size << std::endl;
	}
	else
		return (std::cout << "error. incorrect size" << std::endl, 1);
	return (0);
}

void PmergeMe::doSorting()
{
	//execute 1 cycle using _vector
	//print message about time spend to execute 1 cycle

	clock_t startVec = clock();
	fordJohnsonSort(this->getVector());
    clock_t endVec = clock();
    // Calculate the elapsed time in microseconds
    double durationVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000; // Convert to microseconds
	std::cout << "Time to process a range of " << this->getSize() << " elements with std::vector : " << durationVec << " us" << std::endl;
	//execute 2 cycle using deque
	//print message about time spend to execute 2 cycle

	clock_t startDeq = clock();
	fordJohnsonSort(this->getDeque());
    clock_t endDeq = clock();
    double durationDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000; // Convert to microseconds
	std::cout << "Time to process a range of " << this->getSize() << " elements with std::deque : " << durationDeq << " us" << std::endl;

}
