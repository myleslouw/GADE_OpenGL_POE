#include "DirectionalLight.h"

DirectionalLight::DirectionalLight() : Light()
{
	direction = glm::vec3(0.0f, 1.0f, 0.0f);
}

DirectionalLight::DirectionalLight(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat dIntensity, GLfloat xDirection, GLfloat yDirection, GLfloat zDirection) :
								   Light(red, green, blue, aIntensity, dIntensity)
{
	direction = glm::vec3(xDirection, yDirection, zDirection);
}

void DirectionalLight::UseLight(GLfloat ambient_IntensityLoc, GLfloat ambient_ColourLoc, GLfloat diffuse_IntensityLoc, GLfloat direction_Loc)
{
	/*Method that uses a light, spesifies an ambient colour and ambient Intensity for the light source
	*/
	glUniform3f(ambient_ColourLoc, colour.x, colour.y, colour.z);
	glUniform1f(ambient_IntensityLoc, ambient_Intensity);

	glUniform3f(direction_Loc, direction.x, direction.y, direction.z);
	glUniform1f(diffuse_IntensityLoc, diffuse_Intensity);
}

DirectionalLight::~DirectionalLight()
{
}