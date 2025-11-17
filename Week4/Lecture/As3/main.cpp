#include <iostream>

class Point 
{
      private:

          int _x;
          int _y;
      
      public:

          Point(int x, int y) : _x(x), _y(y){}

          void print()
          {
              std::cout << _x << "\n";
              std::cout << _y << "\n";
          }
};

int main()
{
    Point point(5, 6);

    point.print();
}