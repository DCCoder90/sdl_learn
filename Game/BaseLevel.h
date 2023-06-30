//
// Created by ernes on 6/28/2023.
//

#ifndef SDL_LEARN_BASELEVEL_H
#define SDL_LEARN_BASELEVEL_H

#include <SDL.h>
#include "../include/System/GameLevel.h"
#include "../include/System/GameStates.h"
#include "../include/System/Game.h"
#include "Player.h"

class BaseLevel : public GameLevel{
public:
    BaseLevel();
    void Update() override;
    void Render() override;
    void Load() override;
    void Start() override;
    void Pause() override;
    void Resume() override;
private:

    class Player *player;
};

#endif //SDL_LEARN_BASELEVEL_H
