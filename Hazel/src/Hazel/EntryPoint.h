#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int arc, char** argv)
{
	Hazel::Log::Init();

	int i = 0;
	int i2 = 2;
	HZ_CORE_WARN("Initialized Log!");
	HZ_INFO("HELLO ENGINE STARTED! i={0} i2={1} i3={2}", i, i2, i + i2);


	auto app = Hazel::CreateApplication();
	app->Run();

	delete app;

}
#else
#error Hazel only supports Windows!
#endif
