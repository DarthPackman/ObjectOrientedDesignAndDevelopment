#include <iostream>

class ShallowCopyExample {
public:
    int* data;
    int size;

    // Parameter Constructor
    ShallowCopyExample(int s) {
        size = s;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i;
        }
        std::cout << "Constructor: Allocating memory for data" << std::endl;
    }

    // Destructor
    ~ShallowCopyExample() {
        std::cout << "Destructor: Deleting memory for data" << std::endl;
        delete[] data;
    }
};

class DeepCopyExample {
public:
    int* data;
    int size;

    // Parameter Constructor
    DeepCopyExample(int s) {
        size = s;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i;
        }
        std::cout << "Constructor: Allocating memory for data" << std::endl;
    }

    // User-Defined Deep Copy Constructor
    DeepCopyExample(const DeepCopyExample& other) {// pass by reference
        size = other.size;
        data = new int[size];  // Allocate new memory; Default copy constructor doesn't do this.
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];  // Copy data
        }
        std::cout << "Deep Copy Constructor: Allocating new memory and copying data" << std::endl;
    }

    // Destructor
    ~DeepCopyExample() {
        std::cout << "Destructor: Deleting memory for data" << std::endl;
        delete[] data;
    }
};

int main() {
    // Shallow Copy
    std::cout << "Shallow Copy Example:" << std::endl;
    {
        ShallowCopyExample obj1(5);  // Invoke parameter constructor
        ShallowCopyExample obj2 = obj1;  // Shallow copy (default copy constructor)

        // Since it's a shallow copy, both obj1 and obj2 point to the same memory
        // Potential issues: double deletion, unintended change
    }

    // Deep Copy via user-defined copy constructor
    std::cout << "\nDeep Copy Example:" << std::endl;
    {
        DeepCopyExample obj1(5);  // Invoke parameter constructor
        DeepCopyExample obj2 = obj1;  // Deep copy (user-defined copy constructor)

        // obj1 and obj2 have independent copies of `data`
    }

    return 0;
}
