#include <vector>
#include <iostream>

// - - - Preliminary - - - \\

void swap(std::vector<int> &arr, int index_1, int index_2){
    // Swaps values of index 1 and index 2 in provided array
    int tmp = arr[index_1];
    arr[index_1] = arr[index_2];
    arr[index_2] = tmp;
};


// - - - - A list of Sorting Algorithms - - - - \\

std::vector<int> inserstionSort(std::vector<int> input){
    for (int i = 0; i < input.size(); i++){
        while (int e = i > 0 && input[e-1] > input[e]){
            e--;
        };
    };
};
