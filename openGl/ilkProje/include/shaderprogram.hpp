#include<string>
#include<map>
#include<glm/vec3.hpp>
#ifndef SHADERPROGRAM_HPP
#define SHADERPROGRAM_HPP

class ShaderProgram
{
    public:
        ShaderProgram();
        ~ShaderProgram();
        void attachShader(const char* fileName, unsigned int shaderType);

        void link();

        void use();

        void addUniform(const std::string& varName);

        void setFloat(const std::string& varName, float value);

        void setVec3(const std::string& varName, const glm::vec3& value);
    
    private:
        unsigned int m_ProgramId;

        std::string getShaderFromFile(const char* fileName);

        std::map<std::string, unsigned int> m_UniformVars;

};


#endif
