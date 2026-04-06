#include <iostream> // thư viện cung cấp hàm : đọc input , in ouput trong terminal
#include <cmath>    // thư viện toán học cung cấp hàm sqrt()

int main()
{

    struct Player
    {
        float x;
        float y;
    };

    Player player;
    player.x = 0;
    player.y = 0;

    struct Enemy
    {
        float x;
        float y;
    };

    Enemy enemy;
    enemy.x = 3;
    enemy.y = 4;

    float deltaX;
    float deltaY;

    while (true)
    {
        deltaX = enemy.x - player.x;
        deltaY = enemy.y - player.y;

        if ((deltaX * deltaX + deltaY * deltaY) <= 0.0f)
        {

            break;
        }

        float length = sqrt(deltaX * deltaX + deltaY * deltaY);
        std::cout << length << std::endl;

        float nX = deltaX / length;
        float nY = deltaY / length;

        player.x += nX;
        player.y += nY;
        std::cout << "player: " << "(" << player.x << "," << player.y << ")" << std::endl;
    }
}