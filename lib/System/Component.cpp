#include "../../include/System/Component.h"

Component::Component(GameObject &parent) : parent(parent) {}

std::string Component::GetName() {
    return name;
}

void Component::Start() {}

void Component::Update() {}

void Component::NotifyCollision(GameObject &other) {}

void Component::Render() {}