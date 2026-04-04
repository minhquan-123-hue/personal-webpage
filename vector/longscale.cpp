#include <iostream>
#include <cmath>

int main()
{
    struct Vector
    {
        int x;
        int y;
    };

    Vector vector;
    vector.x = 3;

    vector.y = 4;

    int do_dai = (vector.x * vector.x) + (vector.y * vector.y);

    do_dai = sqrt(do_dai);
    std::cout << "do_dai: " << do_dai << std::endl;
    return 0;
}
