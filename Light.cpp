#include "Light.h"


Light::Light()
{
	colour = glm::vec3(1.0f, 1.0f, 1.0f); // the colour is defines by the texture the colour of the light determines how bright it is 0.0f means the colour of the
	ambientIntensity = 1.0f;			  // brick wouldnt be shown | the numbers how much of that colour in the texture should be shown



	diffuseIntensity = 0.0f;

}

Light::Light(GLfloat shadowWidth, GLfloat shadowHeight, GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat dIntensity)
{

	shadowMap = new ShadowMap();
	shadowMap->Init(shadowWidth, shadowHeight);


	colour = glm::vec3(red, green, blue);
	ambientIntensity = aIntensity;
	diffuseIntensity = dIntensity;


}


Light::~Light()
{

}