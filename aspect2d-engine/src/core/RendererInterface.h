#pragma once

namespace ASP
{
	class RendererInterface
	{
	public:
		virtual void ClearScreen() = 0;
		virtual void ClearScreen(float red, float green, float blue, float alpha) = 0;
	};
}
