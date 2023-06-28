//
// Created by ernes on 6/16/2023.
//

#include "../../include/System/Time.h"

Time::Time() {
    float deltaTicks = 0.f;
    float frameTicks = 0.f;

    void StartTick();
    void EndTick();
}

void Time::StartTick() {
    startTicks = SDL_GetTicks();
}

void Time::EndTick() {
    endTicks = SDL_GetTicks();

    deltaTicks = endTicks - startTicks;
    frameTicks = (endTicks - startTicks + (16.6666f - deltaTicks)) / 1000.f;
}