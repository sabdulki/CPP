
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

// Merge two sorted lists into a single sorted list
template <typename T>
void PmergeMe::merge(T& arr, int start, int mid, int end) 
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    // std::cout <<"n1 size: "<<n1<<". n2 size: "<<n2<<std::endl;
    T left(n1), right(n2);
    
    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];
    
	// std::cout << "\tleft arr:\n";
	// for (int i = 0; i < n1; i++)
	// 	std::cout << left[i]<< ", ";
	// std::cout << std::endl;

	// std::cout << "\tright arr:\n";
	// for (int i = 0; i < n1; i++)
	// 	std::cout << right[i]<< ", ";
	// std::cout << std::endl;
	
    int i = 0, j = 0, k = start;
    
    // Merge the arrays
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
		// std::cout << "\tloop: "<< k << "\n";
		// for (int z = 0; z < arr.size(); z++)
		// 	std::cout << arr[z]<< ", ";
		// std::cout << std::endl;
        k++;
    }
    
    // Copy remaining elements if any
	// std::cout << "copy remaining!!\n";
    while (i < n1) {
        arr[k] = left[i];
        i++;
		// std::cout << "\tloop in left: "<< k << "\n";
		// for (int z = 0; z < arr.size(); z++)
		// 	std::cout << arr[z]<< ", ";
		// std::cout << std::endl;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
		// std::cout << "\tloop in right: "<< k << "\n";
		// for (int z = 0; z < arr.size(); z++)
		// 	std::cout << arr[z]<< ", ";
		// std::cout << std::endl;
        k++;
    }
}

// Ford-Johnson algorithm implementation
template <typename T>
void PmergeMe::fordJohnsonSort(T& arr) 
{
    int n = getSize();
    
    // Pairwise sorting
    for (int i = 0; i < n - 1; i += 2) {
        if (arr[i] > arr[i + 1])
            std::swap(arr[i], arr[i + 1]);
    }
    
    // Merging sorted pairs
    int len = 2;
    while (len < n) {
        for (int i = 0; i < n - len; i += 2 * len) {
            int mid = std::min(i + len - 1, n - 1);
            int end = std::min(i + 2 * len - 1, n - 1);
			// std::cout <<"i: "<<i<<", mid: "<<mid<<", end: "<<end<<std::endl;
            merge(arr, i, mid, end);
			// std::cout << "after merge: " << std::endl;
			// for (int i = 0; i < n; i++)
			// 	std::cout << arr[i] << ", ";
			// std::cout << std::endl; 
        }
        len *= 2;
    }
}

#endif