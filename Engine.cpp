#include "Engine.h"
#include "World.h"

Engine::Engine()
{
    IsRunning = true;
}

Engine::~Engine()
{
}

void Engine::Initialize()
{
}

void Engine::Run()
{
    while (IsRunning)
    {
        //Input
        //Tick
        //Render
    }
}

void Engine::Stop()
{
    IsRunning = false;
}

void Engine::Terminate()
{
}
