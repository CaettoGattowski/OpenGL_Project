#pragma once
#include <glm.hpp>
#include <GL\glew.h>



class Light
{
public:
		Light();
		Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity,
			GLfloat xDir, GLfloat yDir, GLfloat zDir, GLfloat dIntensity);

		void UseLight(GLfloat ambientIntensityLocation, GLfloat ambientColourLocation,
						GLfloat diffuseIntensityLocation, GLfloat directionLocation);

		~Light();

private:
	glm::vec3 colour;
	GLfloat ambientIntensity; // how intense the light is

	//ambient light doesnt care about direction compared to directional lighting
	glm::vec3 direction;
	GLfloat diffuseIntensity;


};

