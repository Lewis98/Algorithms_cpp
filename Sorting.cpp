#include <vector>
#include <iostream>

// - - - Preliminary - - - \\

template<typename T>
void swap(std::vector<T> &arr, int index_1, int index_2){
    // Swaps values of index 1 and index 2 in provided array
    int tmp = arr[index_1];
    arr[index_1] = arr[index_2];
    arr[index_2] = tmp;
};


// - - - - A list of Sorting Algorithms - - - - \\

// Insertion Sort | Best : O(n) - Worst : O(n^2) - Avg : O(n^2) |
template <typename T>
std::vector<T> inserstionSort(std::vector<T> input){

    std::vector<T> output = input;

    for (int i = 0; i < output.size(); i++){
        for (int e = i; e > 0 && output[e-1] > output[e]; e--){
            swap(output, e, e-1);
        };
    };

    return output;
};




