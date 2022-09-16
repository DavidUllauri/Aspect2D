#include "AspectApp.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Window.h"

#define SCR_WIDTH 800
#define SCR_HEIGHT 600

namespace ASP
{

	AspectApp::AspectApp()
	{
	}

	int AspectApp::Run() {
		ASP_LOG("Aspect running...");
		Window::Init();
		Window::GetWindow()->CreateWindow(SCR_WIDTH, SCR_HEIGHT, "game window");

		while (!Window::GetWindow()->WindowShouldClose())
		{
			glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);

			Window::GetWindow()->OnUpdate();
		}

		glfwTerminate();
		return 0;
	}
}
