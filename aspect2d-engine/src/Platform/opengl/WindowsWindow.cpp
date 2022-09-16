#include "pch.h"

#include "WindowsWindow.h"
#include "core/Base.h"

namespace ASP
{
	WindowsWindow::WindowsWindow()
	{
		if (!glfwInit()) {
			ASP_LOG("ERROR: Initialization failed");
			// exit(EXIT_FAILURE);
		}
	}

	WindowsWindow::~WindowsWindow()
	{
		if (m_window != nullptr)
			glfwDestroyWindow(m_window);
		glfwTerminate();
	}

	bool WindowsWindow::CreateWindow(int width, int height, const std::string& windowName)
	{
		m_window = glfwCreateWindow(width, height, windowName.c_str(), NULL, NULL);
		if (!m_window) {
			ASP_LOG("ERROR: Failed to create GLFW window");
			return false;
		}

		glfwMakeContextCurrent(m_window);
		glfwSwapInterval(1);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
			ASP_LOG("ERROR: Fail to initialize GLAD");
			return false;
		}

		return true;
	}

	void WindowsWindow::OnUpdate()
	{
		glfwSwapBuffers(m_window);
		glfwPollEvents();
	}

	int WindowsWindow::GetWidth() const
	{
		int width, height;
		glfwGetWindowSize(m_window, &width, &height);
		return width;
	}

	int WindowsWindow::GetHeight() const
	{
		int width, height;
		glfwGetWindowSize(m_window, &width, &height);
		return height;
	}

	bool WindowsWindow::WindowShouldClose()
	{
		return glfwWindowShouldClose(m_window);
	}
}
