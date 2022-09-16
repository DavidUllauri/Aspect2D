#include "pch.h"

#include "Window.h"

#ifdef ASP_WINDOWS
	#include "Platform/opengl/WindowsWindow.h"
#endif

namespace ASP
{
	Window::Window()
	{
#ifdef ASP_WINDOWS
		m_window = new WindowsWindow;
#endif
	}

	void Window::Init()
	{
		if (m_instance == nullptr)
			m_instance = new Window;
	}

	Window* Window::GetWindow()
	{
		assert(m_instance);
		return m_instance;
	}

	bool Window::CreateWindow(int width, int height, const std::string& windowName)
	{
		return m_window->CreateWindow(width, height, windowName);
	}

	void Window::OnUpdate()
	{
		m_window->OnUpdate();
	}

	int Window::GetWidth() const
	{
		return m_window->GetWidth();
	}

	int Window::GetHeigh() const
	{
		return m_window->GetHeight();
	}

	bool Window::WindowShouldClose()
	{
		return m_window->WindowShouldClose();
	}
}
