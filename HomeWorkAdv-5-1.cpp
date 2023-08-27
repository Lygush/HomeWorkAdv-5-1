#include <iostream>
#include <vector>

template<class T>
T pow(T num) {
    return num * num;
}
template<>
std::vector<int> pow(std::vector<int> vector) {
for (int i{}; i < 5; ++i) {
    vector[i] = pow(vector[i]);
}
return vector;
}

int  main() {
    std::cout << pow(5.5) << std::endl;
    std::vector<int> vector {-1,2,3,4,5};
    vector = pow(vector);
    for(int i: vector) {
        std::cout << i << " ";
    }
}