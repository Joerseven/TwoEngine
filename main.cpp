#include <iostream>
#define GLFW_INCLUDE_ES2
#include <GLFW/glfw3.h>
#include <glad/glad.h>

int main() {
	GLFWwindow* window;

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_ANY_PROFILE);

    window = glfwCreateWindow(640, 480, "First window!", NULL, NULL);

    if (!window) {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);

	if (!gladLoadGLES2Loader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Glad not loaded" << std::endl;
		return -1;
	}

    std::cout << glGetString(GL_VERSION);
	
	while(!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}