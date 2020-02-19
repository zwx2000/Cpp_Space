#include <iostream>
#include <algorithm>
int main ()
{
    int myints[] = {1,2,3,4};
    std::sort (myints,myints+4);
    std::cout << "The 4! possible permutations with 4 elements:\n";
    do
    {
        std::cout << myints[0] << ' '
                  << myints[1] << ' '
                  << myints[2] << ' '
                  << myints[3] << '\n';
    } while(std::next_permutation(myints,myints+4));
    std::cout << "After loop: "
              << myints[0] << ' '
              << myints[1] << ' '
              << myints[2] << ' '
              << myints[3] << '\n';
    return 0;
}
