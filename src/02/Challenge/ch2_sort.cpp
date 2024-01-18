// C++ Code Challenges, LinkedIn Learning

// Challenge #2: Sorting an Array
// Sort the elements in an array in ascending order.
// Implement the algorithm of your choice.
// Don't use STL vectors.
// Don't use a sorting function from a library.

#include <iostream>
#include <algorithm>
#include <utility>

// sort_array()
// Summary: This function receives an array of integers and sorts it in ascending order.
// Arguments:
//           arr: A pointer acting as the array to sort.
//           n: The size of the array.
// Returns: A boolean value: True on success, false otherwise.

int partition(int *arr, int low, int high) {
    
    // int piv_idx = high;
    // int lowers[high-low+1];
    // int highers[high-low+1];
    // int lc = 0;
    // int uc = 0;

    // for (int i=low; i < high; i++) {
    //     if (arr[i] < arr[piv_idx]) {
    //         lowers[lc] = arr[i];
    //         lc++;
    //     } else {
    //         highers[uc] = arr[i];
    //         uc++;
    //     }
    // }

    // for (int i=0; i < lc; i++) arr[low+i] = lowers[i];
    // arr[low+lc] = arr[piv_idx];
    // for (int i=0; i < uc; i++) arr[low+i+lc+1] = highers[i];

    // // for (int i = low; i <= high; i++)
    // //     std::cout << arr[i] << " ";
    // // std::cout << "]" << std::endl << std::endl << std::flush;
    
    // std::cout << piv_idx << std::endl;
    // return lc+low;
    int pivot = arr[high];
    int i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            std::swap(arr[j],arr[i]);
            i++;
        }
    }
    std::swap(arr[i],arr[high]);
    
    return i;

    }

void quicksort_recursion(int *arr, int low, int high) {
    if (low<high){
    int p_idx = partition(arr, low, high);

    quicksort_recursion(arr, low, p_idx-1);
    quicksort_recursion(arr, p_idx + 1, high);
    }
}

bool sort_array(int *arr, int n){

    quicksort_recursion(arr, 0, n-1);
    // int swapped = 1;
    // int temp1;
    // int temp2;
    // int i;

    // while (swapped>0) {
    //     for (int i = 0; i < n; i++)
    //         std::cout << arr[i] << " ";
    //     std::cout << ""<< std::endl;
    //     swapped = 0;
    //     i = 0;
    //     for (; i < n; i++) {
    //         if (arr[i] > arr[i+1] && i+1 < n) {
    //             temp1 = arr[i];
    //             temp2 = arr[i+1];
    //             arr[i] = temp2;
    //             arr[i+1] = temp1;
    //             swapped++;
    //         }
    //     }
    // }
    
    return false;
}

// Main function
int main(){
    // The following array will be treated as an array of length len. 
    const int len = 17; // Don't exceed the length of the array below!
    int array[] = {1,2,3,4,5,-5,-4,-3,-2,-1,0,10,11,12,13,14,15};

    // Print the original array
    std::cout << "Original Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    sort_array(array, len); // Sort the array

    // Print the sorted array
    std::cout << "  Sorted Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    return 0;
}
