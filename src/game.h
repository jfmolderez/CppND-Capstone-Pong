#ifndef GAME_H
#define GAME_H
#include <vector>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "paddle.h"
#include "ball.h"

class Game {
public:
    Game(std::size_t, std::size_t);
    void run(Controller const &controller, Renderer &renderer, std::size_t target_frame_duration);

private:
    ManualPaddle p1;
    AutoPaddle p2;
    Ball b;
};

#endif