#include <iostream>
#include <string>
#include <vector>

#define MAX_NUMBER_OF_ELEMENTS 100

int main()
{
    int elements[MAX_NUMBER_OF_ELEMENTS], numberOfElements = 0;
    
    std::cout << "Enter number of elements: ";
    std::cin >> numberOfElements;
    
    for (int i = 0; i < numberOfElements; ++i)
    
    {
        std::cout << "Enter Element#" << i + 1 << ": ";
        std::cin >> elements[i];
    }
    
    for (int i = 0; i < numberOfElements; ++i)
    {
        for (int j = i; j < numberOfElements; ++j)
        {
            if (elements[i] > elements[j])
            {
                int temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < numberOfElements; ++i)
    {
        std::cout << elements[i] << " ";
    }
    std::cout << std::endl;
    
	return 0;
}

