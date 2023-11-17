#pragma once
class UWorld;

class Engine
{
protected:
    UWorld* World;
    bool IsRunning;

public:
    Engine();
    virtual ~Engine();
    void Initialize();
    void Run();
    void Stop();
    void Terminate();
    inline UWorld* GetWorld() const { return World; }
};
