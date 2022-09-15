#pragma once

#include <GL/glew.h>
class Mesh
{
public: 
	Mesh();

	void createMesh(GLfloat *vertices, unsigned int *indices, unsigned int numVertices, unsigned int numIndices);
	void renderMesh();
	void renderTerrainMesh(const int numStrips, const int numTrisPerStrip);
	void clearMesh();

	~Mesh();

private: 
	GLuint VAO, VBO, IBO;
	int indexCount;

};

