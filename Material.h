#pragma once

#include <GL\glew.h>


class Material
{
public:
	Material();
	Material(GLfloat Sintensity, GLfloat shine);

	void UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation);


	~Material();


private:
	GLfloat specularIntensity; // how much specular light should be on the object, how much of the light source will the object absorb ( reflectiveness of the object )
	GLfloat shininess; // how smooth the surface is going to be portrayed as

};

