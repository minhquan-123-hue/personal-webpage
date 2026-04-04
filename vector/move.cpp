#include <iostream>

int main()
{
    // đây là tọa độ gốc
    int xOrigin = 0;
    int yOrigin = 0;

    struct Vector
    {
        int x;
        int y;
    };

    Vector vector;
    vector.x = 3;
    vector.y = 4;

    for (int index = 0; index < 5; index++)
    {
        xOrigin = xOrigin + vector.x;
        yOrigin = yOrigin + vector.y;
        std::cout << "(" << xOrigin << "," << yOrigin << ")" << std::endl;
    }
    return 0;
}