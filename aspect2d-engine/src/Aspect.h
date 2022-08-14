#pragma once

#include "core/AspectApp.h"

#define ASPECT_APPLICATION_START(classname) \
\
int main()\
{\
	classname game;\
	game.Run();\
}