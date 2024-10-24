#include <iostream>

class MyClass {
public:
    MyClass(int x) : data(x) {
        std::cout << "Constructor called for " << data << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called for " << data << std::endl;
    }

private:
    int data;
};

void createObject() {
    MyClass obj3(3);  // Local object in this function
    std::cout << "Inside createObject function" << std::endl;
}

int main() {
    std::cout << "Entering main" << std::endl;

    MyClass obj1(1);  // Object created in main function
    {
        MyClass obj2(2);  // Object created inside a block
        std::cout << "Inside the block" << std::endl;
    }  // obj2 goes out of scope here, destructor for obj2 is called

    createObject();  // obj3 is created and destroyed inside this function

    std::cout << "Exiting main" << std::endl;

    return 0;  // obj1 goes out of scope here, destructor for obj1 is called
}
