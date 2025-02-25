#pragma once

#include "Core.h"

namespace Plush {
	class PLUSH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// defined in CLIENT
	Application* CreateApplication();
}