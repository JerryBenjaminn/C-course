#include <iostream>

int main()
 {
    int i = 1;
    while (i <= 1000)
    {
       if (i % 3 == 0)
        {
          std::cout << i << "\n";
        }

        i++;
        
    }

    return 0;
}