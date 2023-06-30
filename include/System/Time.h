#ifndef SDL_LEARN_TIME_H
#define SDL_LEARN_TIME_H

#include <SDL.h>

class Time {
public:
    Time();

    float deltaTicks;
    float frameTicks;

    /**
 * To be run at the begining of a frame, logs the start tick of the frame
 */
    void StartTick();

    /**
 * To be run at the end of the frame, logs the end tick of the frame and calculates the framerate
 */
    void EndTick();
    static Time& GetInstance();
private:
    Uint32 startTicks = 0;
    Uint32 endTicks = 0;
    static Time instance;
};


#endif //SDL_LEARN_TIME_H
