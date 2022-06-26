#ifndef PINGPONGGAME_PLAYER_H
#define PINGPONGGAME_PLAYER_H


class Player
{
private:
    int x, y;
    int originalX, originalY;
public:
    Player()
    {
        x = y = 0;
    }
    Player(int posX, int posY) : Player()
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }
    inline void Reset() { x = originalX; y = originalY; }
    inline int getX() { return x; }
    inline int getY() { return y; }
    inline void moveUp() { y--; }
    inline void moveDown() { y++; }
};


#endif //PINGPONGGAME_PLAYER_H
