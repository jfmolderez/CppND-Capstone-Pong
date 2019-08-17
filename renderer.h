#ifndef RENDERER_H
#define RENDERER_H
#include "SDL.h"
#include "SDL_ttf.h"
#include "paddle.h"
#include "ball.h"
#include <sstream>


class Renderer {
public:
    Renderer(const std::size_t kScreenWidth, const std::size_t kScreenHeight);
    ~Renderer();
    void render(const Paddle p1, const Paddle p2, const Ball & b);
    
    void updateWindowTitle(const int fps, const Paddle p1, const Paddle p2);

private:
    SDL_Window *sdl_window;
    SDL_Renderer *sdl_renderer;
    const std::size_t kScreenWidth;
    const std::size_t kScreenHeight;
};
#endif