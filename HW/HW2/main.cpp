#include <iostream>
#define GLFW_INCLUDE_NONE
#define GLFW_EXPOSE_NATIVE_WIN32
#include <VEZ.h>
#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>
#include <string>
#include <vector>
#include "SampleTriangle.h"

int main(int argc, char** argv)
{
    SampleTriangle app;
    return app.Run();
}