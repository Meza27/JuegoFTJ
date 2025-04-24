#include <iostream>
#include "MainGame.h"
#include <SDL3/SDL.h>
#include <KHR/khrplatform.h>
#include <EGL/eglplatform.h>
#include <GL/eglew.h>

int main()
{
    MainGame game;
    game.run();
    system("PAUSE");
    return 0;
}