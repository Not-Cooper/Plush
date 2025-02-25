#include "Plush.h"

class Sandbox : public Plush::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Plush::Application* Plush::CreateApplication()
{
	return new Sandbox();
}