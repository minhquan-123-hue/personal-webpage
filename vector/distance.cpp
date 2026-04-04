#include <iostream>
#include <cmath>

int main()
{
    // tạo nhân vật
    struct Player
    {
        int vectorX;
        int vectorY;
    };

    Player player;
    player.vectorX = 0;
    player.vectorY = 0;

    // tạo target
    struct Target
    {
        int x;
        int y;
    };

    Target target;
    target.x = 3;
    target.y = 4;

    // tính độ dài của vector mà player đang dùng
    int lengthPlayerVec = (player.vectorX * player.vectorX) + (player.vectorY * player.vectorY);
    lengthPlayerVec = sqrt(lengthPlayerVec);

    // tính vector đi đến target
}