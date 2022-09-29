#include "core/Renderer.h"

#include "Platform/opengl/OpenGLRenderer.h"

namespace ASP
{
	void Renderer::Init()
	{
		if (m_Instance == nullptr)
			m_Instance = new Renderer;
	}
	void Renderer::ClearSreen()
	{
		m_Instance->m_Renderer->ClearScreen();
	}

	void Renderer::ClearSreen(float red, float green, float blue, float alpha)
	{
		m_Instance->m_Renderer->ClearScreen(red, green, blue, alpha);
	}

	Renderer::Renderer()
	{
#ifdef ASP_OPENGL
		m_Renderer = new OpenGLRenderer;
#else
		// Only OpenGL is supported;
#endif
	}
}
