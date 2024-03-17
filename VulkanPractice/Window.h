#pragma once

#define GLFW_INCLUDE_VULKAN // GLFW가 VULKAN 헤더 또한 포함해야 한다는 신호를 보낸 것
#include <GLFW/glfw3.h>

#include <string>
#include <string_view>

namespace Core {

	class Window {
	private:
		GLFWwindow* window{ nullptr };
		const int width;
		const int height;

		std::string windowName;

		void InitWindow();

	public:
		Window(int sizeWidth, int sizeHeight, const std::string_view& windowName);
		~Window();

		Window(const Window& other) = delete; // 창의 복사에 관련된 함수 delete
		Window& operator=(const Window& other) = delete; // s w u

		bool IsClosed();
	};
}