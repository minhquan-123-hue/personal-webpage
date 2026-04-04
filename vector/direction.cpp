#include <iostream>
#include <cmath>

int main()
{
    // vi tri cua nhan vat
    struct Character
    {
        int x;
        int y;
    };

    Character character;
    character.x = 0;
    character.y = 0;

    std::cout << "Char pos: " << "(" << character.x << "," << character.y << ")" << std::endl;

    // vi tri cua ke dich
    struct Enemy
    {
        int x;
        int y;
    };

    Enemy enemy;
    enemy.x = 10;
    enemy.y = 0;

    std::cout << "Enemy pos: " << "(" << enemy.x << "," << enemy.y << ")" << std::endl;

    // tim ra khoang cach giua enemy va character
    int Xdirection = enemy.x - character.x;
    int Ydirection = enemy.y - character.y;

    std::cout << "space: " << "(" << Xdirection << "," << Ydirection << ")" << std::endl;

    // do dai cua vector
    int longscale = sqrt((Xdirection * Xdirection) + (Ydirection * Ydirection));
    std::cout << "longscale: " << longscale << std::endl;

    // chuan hoa do dai vector
    int normalizeVectorX = Xdirection / longscale;
    int normalizeVectorY = Ydirection / longscale;

    std::cout << "vector: " << "(" << normalizeVectorX << "," << normalizeVectorY << ")" << std::endl;

    for (int index = 0; character.x < enemy.x; index++)
    {
        character.x = character.x + normalizeVectorX;
        character.y = character.y + normalizeVectorY;

        std::cout << "(" << character.x << "," << character.y << ")" << std::endl;
    }
    return 0;
}