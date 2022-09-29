#pragma once
#include "pch.h"

namespace ASP
{
	class WindowInterface
	{
	public:
		virtual bool CreateWindow(int width, int height, const std::string& windowName) = 0;
		virtual void OnUpdate() = 0;
		virtual int GetWidth() const = 0;
		virtual int GetHeight() const = 0;
		virtual bool WindowShouldClose() = 0;
	};
}
