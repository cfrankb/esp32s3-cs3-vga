#ifndef _engine__h
#define _engine__h

#include <mutex>

class CGame;
class CAnimator;
class CDisplay;

class CEngine
{
public:
    static CEngine *getEngine();
    ~CEngine();

    std::mutex &mutex();
    CGame &game();
    void drawScreen(uint8_t *buf);
    void drawLevelIntro(uint8_t *buf);
    void mainLoop(int ticks);

    enum
    {
        TILE_SIZE = 16,
        PLAYER_FRAMES = 8,
        NO_ANIMZ = 255,
        TILE_OFFSET = TILE_SIZE * TILE_SIZE,
    };

protected:
    CEngine();
    CAnimator *m_animator = nullptr;
    int m_playerFrameOffset = 0;
    int m_healthRef = 0;
    CGame *m_game = nullptr;
    bool init();
    void drawKeys(const CDisplay &display, const int y);
};

#endif