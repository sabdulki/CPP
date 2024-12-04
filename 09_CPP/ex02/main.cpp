/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:03:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/12/04 23:02:33 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

// int main()
// {
	
// }


#include <iostream>
#include <vector>
#include <algorithm>

// Merge two sorted lists into a single sorted list
void merge(std::vector<int>& arr, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;
    std::cout <<"n1 size: "<<n1<<". n2 size: "<<n2<<std::endl;
    std::vector<int> left(n1), right(n2);
    
    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];
    
	std::cout << "\tleft arr:\n";
	for (int i = 0; i < n1; i++)
		std::cout << left[i]<< ", ";
	std::cout << std::endl;

	std::cout << "\tright arr:\n";
	for (int i = 0; i < n1; i++)
		std::cout << right[i]<< ", ";
	std::cout << std::endl;
	
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
	std::cout << "copy remaining!!\n";
    while (i < n1) {
        arr[k] = left[i];
        i++;
		std::cout << "\tloop in left: "<< k << "\n";
		for (int z = 0; z < arr.size(); z++)
			std::cout << arr[z]<< ", ";
		std::cout << std::endl;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
		std::cout << "\tloop in right: "<< k << "\n";
		for (int z = 0; z < arr.size(); z++)
			std::cout << arr[z]<< ", ";
		std::cout << std::endl;
        k++;
    }
}

// Ford-Johnson algorithm implementation
void fordJohnsonSort(std::vector<int>& arr) {
    int n = arr.size();
    
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
			std::cout <<"i: "<<i<<", mid: "<<mid<<", end: "<<end<<std::endl;
            merge(arr, i, mid, end);
			std::cout << "after merge: " << std::endl;
			for (int i = 0; i < n; i++)
				std::cout << arr[i] << ", ";
			std::cout << std::endl; 
        }
        len *= 2;
    }
}

// Helper function to print the array
void printArray(const std::vector<int>& arr) {
    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;
}

/* 
	second container would be list. upgrade each fucntion to sort properly using list
*/

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    
    std::cout << "Original array: ";
    printArray(arr);
    
    fordJohnsonSort(arr);
    
    std::cout << "Sorted array: ";
    printArray(arr);
    
    return 0;
}
