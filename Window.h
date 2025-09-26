#pragma once

#include "stdio.h"

#include <GL\glew.h>
#include <GLFW\glfw3.h>

class Window
{
public:
	Window();

	Window(GLint windowWidth, GLint windowHeight);

	int Initialise();

	GLint getBufferWidth() { return bufferWidth; }
	GLint getBufferHeight() { return bufferHeight; }

	bool getShouldClose() { return glfwWindowShouldClose(mainWindow); }

	bool* getKeys() { return keys; }
	GLfloat getXchange();
	GLfloat getYchange();

	void swapBuffers() { glfwSwapBuffers(mainWindow); }

	~Window();

private:
	GLFWwindow* mainWindow;

	GLint width, height;
	GLint bufferWidth, bufferHeight;


	bool keys[1024]; // covers the range of ascii characters, all keys have a number to be adressed and tracked

	GLfloat lastX; // every time the mouse moves we compare to the last coords
	GLfloat lastY;
	GLfloat xChange; // comparison of starting to last coords calculate the change
	GLfloat yChange;
	bool mouseFirstMoved; // takes into account the first initial movement

	void createCallbacks();
	static void handleKeys(GLFWwindow* window, int key, int code, int action, int mode); // we need static because glfw will do a callback 
	static void handleMouse(GLFWwindow* window, double xPos, double yPos);
};