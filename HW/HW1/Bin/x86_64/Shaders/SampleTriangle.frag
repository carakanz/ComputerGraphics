#version 450
#extension GL_ARB_separate_shader_objects : enable

layout(location = 0) in VS_OUT
{
    vec3 pos;
    vec3 normal;
    vec2 texCoord;
} ps_in;

layout(location = 0) out vec4 outColor;

void main()
{
    if (ps_in.pos[2] < 0.01f) {
        outColor = vec4(1,0,0,1);
    } else if (ps_in.pos[2] < 0.2f) {
        outColor = vec4(0,1,0,0.5);
    } else {
        outColor = vec4(0,0,1,0.5);
    }
}