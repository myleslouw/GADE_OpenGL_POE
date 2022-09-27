#version 330 core
layout (location = 0) in vec3 Pos;
layout (location = 1) in vec2 VertexUV;

out float Height;
out vec2 UV;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    Height = Pos.y;
    gl_Position = projection * view * model * vec4(Pos, 1.0);
    UV = VertexUV;
}
