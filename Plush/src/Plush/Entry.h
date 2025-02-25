#pragma once

#ifdef PL_PLATFORM_WINDOWS

// will return the application that is using the engine
extern Plush::Application* Plush::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Plush::CreateApplication();
	app->Run();
	delete app;
}

#endif // PL_PLATFORM_WINDOWS
