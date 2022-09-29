#include "AspectApp.h"

#include "Window.h"

#include "Renderer.h"

#define SCR_WIDTH 800
#define SCR_HEIGHT 600

namespace ASP
{

	AspectApp::AspectApp()
	{
		Window::Init();
		Window::GetWindow()->CreateWindow(SCR_WIDTH, SCR_HEIGHT, "game window");
		Renderer::Init();
	}

	int AspectApp::Run() {
		ASP_LOG("Aspect running...");

		while (!Window::GetWindow()->WindowShouldClose())
		{
			Renderer::ClearSreen(0.2f, 0.3f, 0.3f, 1.0f);

			Window::GetWindow()->OnUpdate();
		}

		return 0;
	}
}
