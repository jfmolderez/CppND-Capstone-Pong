#ifndef RENDERER_H
#define RENDERER_H
#include "SDL.h"
#include "paddle.h"
#include "ball.h"
#include <cstdio>


class Renderer {
public:
    
    Renderer(const std::size_t kScreenWidth, const std::size_t kScreenHeight);

    ~Renderer();  // destructor

    void render(const Paddle & p1, const Paddle & p2, const Ball & b);
    
    void updateWindowTitle(const int fps, const Paddle p1, const Paddle p2);

private:
    SDL_Window *sdl_window;
    SDL_Renderer *sdl_renderer;
    const std::size_t kScreenWidth;
    const std::size_t kScreenHeight;
};
#endif