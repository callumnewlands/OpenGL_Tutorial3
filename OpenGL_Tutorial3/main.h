#pragma once

// OpenGl Library Files
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include "glm-0.9.9.0\glm-0.9.9.0\glm\glm.hpp"

// Standard Libraries
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void onWindowResize(GLFWwindow* window, int width, int height);
unsigned int getShaderProgram(const GLchar* vertexPath, const GLchar* fragmentPath);
void checkCompileErrors(unsigned int shader, std::string type);

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
