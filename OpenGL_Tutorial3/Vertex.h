#pragma once
#include "glm-0.9.9.0\glm-0.9.9.0\glm\glm.hpp"

struct vertex
{
	glm::vec3 position;

	vertex() { position = glm::vec3();  }
	vertex(float x, float y, float z) { position = glm::vec3(x, y, z); }
	~vertex() { }
};