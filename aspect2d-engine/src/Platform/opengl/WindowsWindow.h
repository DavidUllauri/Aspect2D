#pragma once

#include "core/WindowInterface.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace ASP
{
	class WindowsWindow : public WindowInterface
	{
	public:
		WindowsWindow();
		~WindowsWindow();

		// Inherited via WindowInterface
		virtual bool CreateWindow(int width, int height, const std::string& windowName) override;
		virtual void OnUpdate() override;
		virtual int GetWidth() const override;
		virtual int GetHeight() const override;
		virtual bool WindowShouldClose() override;

	private:
		GLFWwindow* m_window{ nullptr };
	};
}
