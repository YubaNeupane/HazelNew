
#include <Hazel.h>

#include "imgui/imgui.h"


class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{

	}

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Hello World");
		ImGui::Text("This is some useful text.");
		ImGui::End();

	}

	void OnEvent(Hazel::Event& event) override
	{

	}

};

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}
	~Sandbox()
	{
	}
};


Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}