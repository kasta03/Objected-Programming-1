#include "Enemy.h"

Enemy::Enemy(const std::string& name) : GameObject(name) {}


void Enemy::action() {
    std::cout << "Performing enemy-specific action for " << Name() << ":\n";
    render();
    collide();
    update();
}

void Enemy::render() {
    std::cout << "Rendering object\n";
}

void Enemy::collide() {
    std::cout << "Handling collision\n";
}