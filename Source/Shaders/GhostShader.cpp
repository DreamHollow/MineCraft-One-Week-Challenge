#include "Shaders/GhostShader.h"

GhostShader::GhostShader()
    : BasicShader("Ghost", "Chunk")
{
    getUniforms();
}

void GhostShader::loadTime(const float &time)
{
    loadFloat(m_time, time);
}

void GhostShader::getUniforms()
{
    BasicShader::getUniforms();
    m_time = glGetUniformLocation(m_id, "globalTime");
}
