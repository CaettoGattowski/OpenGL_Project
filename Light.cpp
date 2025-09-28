#include "Light.h"


Light::Light()
{
	colour = glm::vec3(1.0f, 1.0f, 1.0f); // the colour is defines by the texture the colour of the light determines how bright it is 0.0f means the colour of the
	ambientIntensity = 1.0f;			  // brick wouldnt be shown | the numbers how much of that colour in the texture should be shown

}

Light::Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity)
{
	colour = glm::vec3(red, green, blue);
	ambientIntensity = aIntensity;


}

void Light::UseLight(GLfloat ambientIntensityLocation, GLfloat ambientColourLocation)
{
	glUniform3f(ambientColourLocation, colour.x, colour.y, colour.z); // takes the float values bound to ambient colour location
	glUniform1f(ambientIntensityLocation, ambientIntensity);
	// we dont need the destructor we leave as it is
}

Light::~Light()
{

}