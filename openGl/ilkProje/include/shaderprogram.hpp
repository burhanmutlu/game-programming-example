#include<string>
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
    
    private:
        unsigned int m_ProgramId;

        std::string getShaderFromFile(const char* fileName);

};


#endif
