#include "Camera.h"

Camera::Camera() {}

Camera::Camera(glm::vec3 startPosition, glm::vec3 startUp, GLfloat startYaw, GLfloat startPitch, GLfloat startMoveSpeed, GLfloat startTurnSpeed)
{
	position = startPosition;
	worldUp = startUp;
	yaw = startYaw;
	pitch = startPitch;
	front = glm::vec3(0.0f, 0.0f, -1.0f);

	moveSpeed = startMoveSpeed;
	turnSpeed = startTurnSpeed;

	update();
}

void Camera::keyControl(bool* keys, GLfloat deltaTime)
{

	GLfloat velocity = moveSpeed * deltaTime;

	if (keys[GLFW_KEY_W])
	{
		position += front * velocity;
	}

	if (keys[GLFW_KEY_S])
	{
		position -= front * velocity;
	}

	if (keys[GLFW_KEY_D])
	{
		position += right * velocity;
	}

	if (keys[GLFW_KEY_A])
	{
		position -= right * velocity;
	}


}

void Camera::mouseControl(GLfloat xChange, GLfloat yChange)
{
	xChange *= turnSpeed;
	yChange *= turnSpeed;

	yaw += xChange;
	pitch += yChange;

	if (pitch > 89.0f)
	{
		pitch = 89.0f;
	}

	if (pitch < -89.0f)
	{
		pitch = -89.0f;
	}

	update();
}

glm::mat4 Camera::calculateViewMatrix()
{
	// where we are looking at from, where the thing we are looking at is, where up is in the world
	return glm::lookAt(position, position + front, up);				// calculates matrix that looks at something 

}

glm::vec3 Camera::getCameraPosition()
{
	return position;
}

void Camera::update() // uniform function across all applications unless space or plane simulator 
{
	front.x = cos(glm::radians(yaw) * cos(glm::radians(pitch)));
	front.y = sin(glm::radians(pitch));
	front.z = sin(glm::radians(yaw) * cos(glm::radians(pitch)));
	front = glm::normalize(front); // normalizing vector is we reset the magnitude to 1, we are basically measuring 1 unit we dont care how far in front we just care about where that front is

	right = glm::normalize(glm::cross(front, worldUp)); // we need to calculate the front based on where our worldUp which is constantly pointing up
	up = glm::normalize(glm::cross(right, front)); // our Up can turn 

}

Camera::~Camera()
{

}