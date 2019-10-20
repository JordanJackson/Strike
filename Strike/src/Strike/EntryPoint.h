#pragma once

#ifdef STRIKE_PLATFORM_WINDOWS

extern Strike::Application* Strike::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Strike::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif