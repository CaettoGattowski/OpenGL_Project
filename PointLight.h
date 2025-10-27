#pragma once
#include "Light.h"

class PointLight :
    public Light
{
public:
    PointLight();
    PointLight(GLfloat red, GLfloat green, GLfloat blue,
        GLfloat aIntensity, GLfloat dIntensity,
        GLfloat xPos, GLfloat yPos, GLfloat zPos,
        GLfloat con, GLfloat lin, GLfloat exp);

    void UseLight(GLfloat ambientIntensityLocation, GLfloat ambientColourLocation,
        GLfloat diffuseIntensityLocation, GLfloat positionLocation,
        GLfloat constantLocation, GLfloat linearLocation, GLfloat exponentLocation);

    ~PointLight();

private:
    glm::vec3 position; // position of where the light is coming from like a lightbulb/torch

    GLfloat constant, linear, exponent; // for the attenuation, c b a for the quadratic 1/(ax^2 + bx + c) where x is the distance from the pointlight


};

