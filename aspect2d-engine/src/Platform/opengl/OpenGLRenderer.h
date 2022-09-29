#pragma once

#include "core/RendererInterface.h"

namespace ASP
{
	class OpenGLRenderer: public RendererInterface
	{
		// Inherited via RendererInterface
		virtual void ClearScreen() override;
		virtual void ClearScreen(float red, float green, float blue, float alpha) override;
	};
}
