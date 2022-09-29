#include "OpenGLRenderer.h"

#include "glad/glad.h"

namespace ASP 
{
	void OpenGLRenderer::ClearScreen()
	{
		glClearColor(0.2f, 0.4f, 0.7f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
	}

	void OpenGLRenderer::ClearScreen(float red, float green, float blue, float alpha)
	{
		glClearColor(red, green, blue, alpha);
		glClear(GL_COLOR_BUFFER_BIT);
	}
}
