#include "EntryPoint.h"
#include "framework/Application.h"

int main()
{
    ly::Application* app = GetApplication();
    app->Run();
    delete app;
}


//cmake -S .. -B . 
// cmake --build .
//./LightYears/LightYearsGame