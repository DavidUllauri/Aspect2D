#pragma once

#include "Base.h"
#include "RendererInterface.h"

namespace ASP
{
	class ASP_API Renderer
	{
	public:
		static void Init();
		static void ClearSreen();
		static void ClearSreen(float red, float green, float blue, float alpha);
	private:
		inline static Renderer* m_Instance{ nullptr };
		RendererInterface* m_Renderer{ nullptr };

		Renderer();
	};
}
