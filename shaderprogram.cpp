#include"shaderprogram.hpp"
#include<glad/glad.h>
#include <string>
#include<fstream>

ShaderProgram::ShaderProgram()
{
    m_ProgramId = glCreateProgram();
}
void ShaderProgram::link()
    {
        glLinkProgram(m_ProgramId);
    }
void ShaderProgram::use()
{
    glUseProgram(m_ProgramId);
}
void ShaderProgram::attachShader(const char* fileName, unsigned int shaderType)
{
    unsigned int shaderId = glCreateShader(shaderType);

    std::string sourceCode = getShaderFromFile(fileName);
}
static std::string getShaderFromFile(const char* fileName)
{
    std::ifstream file(fileName);

    std::string data;

    if (file.is_open())
    { 
        char readChar;

        while ((readChar == file.get() != EOF))
        {
        data += readChar;
        }
        file.close();


    return data;


    }




 
