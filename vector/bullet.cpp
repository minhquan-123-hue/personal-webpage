#include <iostream> // thư viện cung cấp std::cout , std::in , std::endl
#include <cmath>    // thư viện cúng cấp sqrt()

int main()
{
    struct Player
    {
        int x;
        int y;
    };

    Player player;
    player.x = 0;
    player.y = 0;

    struct Mouse
    {
        int x;
        int y;
    };

    Mouse mouse;
    mouse.x = 10;
    mouse.y = 10;

    struct Bullet
    {
        float x;
        float y;
        int speed;
    };

    Bullet bullet;
    bullet.speed = 2;

    // vector giữa mouse và player
    int vectorX = mouse.x - player.x;
    int vectorY = mouse.y - player.y;

    std::cout << "(" << vectorX << "," << vectorY << ")" << std::endl;

    // độ dài của vector (mouse và player)
    float vectorLength = (vectorX * vectorX) + (vectorY * vectorY);
    vectorLength = sqrt(vectorLength);

    std::cout << "vector Length: " << vectorLength << std::endl;

    // tốc độ viên đạn == (vector đơn vị của vectorX/vectorLength , vectorY/vectorLength)
    bullet.x = vectorX / vectorLength;
    bullet.y = vectorY / vectorLength;

    std::cout << "vector bullet: " << "(" << bullet.x << "," << bullet.y << ")" << std::endl;

    // đưa viên đạn di chuyển tới hướng của mouse
    for (int step = 0; (player.x < mouse.x && player.y < mouse.y); step++)
    {
        player.x += (bullet.x * bullet.speed);
        player.y += (bullet.y * bullet.speed);

        std::cout << "player pos: " << "(" << player.x << "," << player.y << ")" << std::endl;
    }
}
