#include <iostream>
#include <vector>


#include "Sorting.h"

void printVector(std::vector<int> &vec, const char* descriptor = "Vector :"){
    std::cout << descriptor;
    for (auto it = vec.begin(); it != vec.end(); it++){
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;
}

int main (int argc, char* argv[]) {
    std::cout << "Hello World" << std::endl;

    std::vector<int> a;

    a.push_back(7);
    a.push_back(3);
    a.push_back(9);
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    a.push_back(1);


    printVector(a);

    std::vector<int> b = inserstionSort(a);

    printVector(b);

}