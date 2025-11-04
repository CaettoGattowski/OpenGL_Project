#pragma once
#include <glm.hpp>
#include <GL\glew.h>
#include <gtc\matrix_transform.hpp>

#include "ShadowMap.h"



class Light
{
public:
		Light();
		Light(GLfloat shadowWidth, GLfloat shadowHeight,
				GLfloat red, GLfloat green, GLfloat blue,
				GLfloat aIntensity, GLfloat dIntensity);

		ShadowMap* GetShadowMap() { return shadowMap; }


		~Light();

protected:
	glm::vec3 colour;
	GLfloat ambientIntensity; // how intense the light is
	GLfloat diffuseIntensity;

	glm::mat4 lightProj; // projection matrix of how the light can see dynamically based on where it is in the world

	ShadowMap* shadowMap;
};

