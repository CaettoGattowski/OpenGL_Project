#include "Material.h"


Material::Material()
{
	specularIntensity = 0.0f;
	shininess = 0.0f;

}

Material::Material(GLfloat Sintensity, GLfloat shine)
{
	specularIntensity = Sintensity;
	shininess = shine;

}

void Material::UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation)
{
	glUniform1f(specularIntensityLocation, specularIntensity);
	glUniform1f(shininessLocation, shininess); // specular light is based on viewer's location
}

Material::~Material()
{


}