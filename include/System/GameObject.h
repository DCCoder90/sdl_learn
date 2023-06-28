//
// Created by ernes on 6/24/2023.
//

#ifndef SDL_LEARN_GAMEOBJECT_H
#define SDL_LEARN_GAMEOBJECT_H

#include <string>
#include <vector>
#include "Component.h"
#include<bits/stdc++.h>
#include <SDL_rect.h>

class GameObject {
public:
    GameObject(std::string objectName);

    /**
* Returns the object's name
     * @see name
*/
    std::string GetName();

    /**
* Adds a component to the GameObject
     * @param component The component to add to the object
     * @see components
*/
    void AddComponent(Component *component);

    /**
* Removes a component from the GameObject
     * @param component The component to remove
     * @see components
*/
    void RemoveComponent(Component *component);

    /**
     * Called on object instantiation
     */
    void Start();

    /**
* Runs every frame performing any required logic
*/
    void Update();

    /**
* A rect denoting the object's position in space.
*/
    SDL_Rect box;
private:
    /**
* A vector containing any components that may be on the GameObject
*/
    std::vector<class Component *> components;
    /**
* A string containing the object name.
*/
    std::string name;
};


#endif //SDL_LEARN_GAMEOBJECT_H
