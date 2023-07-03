

#ifndef DENGINE_PLAYER_H
#define DENGINE_PLAYER_H

#include "../include/System/Component.h"
#include "../include/System/GameObject.h"
#include "../include/Components/Sprite.h"
#include "../include/Universal.h"
#include "../include/Components/SpriteSheet.h"

using namespace dengine;

namespace DemoGame {
    class Player : public Component {
    public:
        Player(GameObject &parent);

        void Start() override;

        void Update() override;

    private:
        SpriteSheet *spriteSheet;
        int speed = 3;
        bool spaceKeyDown = false;
    };
}

#endif //DENGINE_PLAYER_H
