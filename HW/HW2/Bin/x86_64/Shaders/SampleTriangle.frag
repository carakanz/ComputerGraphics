#version 450
#extension GL_ARB_separate_shader_objects : enable

layout(binding = 0) uniform UniformBufferObject
{
    mat4 model;
    mat4 view;
    mat4 proj;
    float time;
};

layout(location = 0) in VS_OUT
{
    vec3 pos;
    vec3 normal;
    vec2 texCoord;
} ps_in;

layout(location = 0) out vec4 outColor;

void main()
{
    vec3 color = 0.5 + 0.5 * sin(vec3(time * 0.0005 + ps_in.pos[0],time * 0.001 + ps_in.pos[1] ,time * 0.00075 + ps_in.pos[2]));
    outColor = vec4(color, 1.0);
}