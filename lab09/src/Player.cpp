#include "Player.h"

Player::Player(const std::string& name) : GameObject(name) {}

void Player::action() {
    std::cout << "Performing player-specific action for " << Name() << ":\n";
    render();
    update();
}

void Player::render() {
    std::cout << "Rendering object\n";
}

void Player::collide() {
    std::cout << "Handling collision\n";
}