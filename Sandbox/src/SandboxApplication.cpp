#include <Strike.h>

class SandboxApplication : public Strike::Application
{
public:
	SandboxApplication()
	{

	}

	~SandboxApplication()
	{

	}
};

Strike::Application* Strike::CreateApplication()
{
	return new SandboxApplication();
}