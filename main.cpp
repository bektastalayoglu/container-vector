#include <iostream>
#include <vector>
 
int main()
{
    // Create a vector containing integers
    std::vector<int> v = {7, 5, 16, 8};
 
    // Add two more integers to vector
    v.push_back(25);
    v.push_back(13);
 
    // Print out the vector
    std::cout << "v = { ";
    for (auto i = v.begin(); i != v.end() ; i++)
        std::cout << *i << ", ";
    std::cout << "}; \n";

    std::cout << "size of vector: " << v.size() << std::endl;
    std::cout << "max size of vector: " << v.max_size() << std::endl;

    // // resizes the vector size to 4
    // v.resize(4);

    // // shrink the vector
    // // v.shrink_to_fit();
    //     std::cout << "v = { ";
    // for (auto i = v.begin(); i != v.end() ; i++)
    //     std::cout << *i << ", ";
    // std::cout << "}; \n";

    v.clear();  // delete all data in vector   
    std::cout << "size of vector: " << v.size() << std::endl;

    std::cout << v.empty() << std::endl; // if vector is empty output : 1 otherwise : 0

    

}
