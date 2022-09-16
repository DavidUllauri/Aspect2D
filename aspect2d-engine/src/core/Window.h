#pragma once

#include "WindowInterface.h"
#include "Base.h"

namespace ASP
{
	class ASP_API Window
	{
	public:
		static void Init();
		static Window* GetWindow();

		bool CreateWindow(int width, int height, const std::string& windowName);
		void OnUpdate();
		int GetWidth() const;
		int GetHeigh() const;
		bool WindowShouldClose();

	private:
		inline static Window* m_instance{ nullptr };
		Window();
		WindowInterface* m_window{ nullptr };
	};
}
