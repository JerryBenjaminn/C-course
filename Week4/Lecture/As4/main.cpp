#include <iostream>

class Box {
public:
    int _size;

    Box() {
        std::cout << "Box created\n";
        _size = 0;
    }

    ~Box() {
        std::cout << "Box destroyed\n";
    }

    void show_size() {
        std::cout << "Size: " << _size << "\n";
    }
};

int main() {
    Box* b = new Box();  

    b->_size = 10;       
    b->show_size();      

    delete b;            

    return 0;
}
