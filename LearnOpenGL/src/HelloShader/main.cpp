#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <cmath>
#include "learnopengl/shader.h"

void framebuffer_size_callback(GLFWwindow* window,int width,int height);
void processInput(GLFWwindow* window);

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
	//glfw��ʼ������
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
	glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);

	//glfw��������
	GLFWwindow* window = glfwCreateWindow(800,600,"LearnOpenGL",NULL,NULL);
	if (window == NULL)
	{
		std::cout<<"Failed to create GLFW window"<<std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window,framebuffer_size_callback);

	//glad��������OpenGL����ָ��
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout<<"Failed to initialize GLAD"<<std::endl;
		return -1;
	}

	Shader shader("triangle.vs","triangle.fs");

	//
	float vertices[] = {
		-0.5f,-0.5f,0.0f,
		0.5f,-0.5f,0.0f,
		0.0f,0.5f,0.0f
	};
	unsigned int VBO,VAO;
	glGenVertexArrays(1,&VAO);
	glGenBuffers(1,&VBO);
	glBindVertexArray(VAO);//---
	glBindBuffer(GL_ARRAY_BUFFER,VBO);//***
	glBufferData(GL_ARRAY_BUFFER,sizeof(vertices),vertices,GL_STATIC_DRAW);
	glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float),(void*)0);
	glEnableVertexAttribArray(0);
	
	glBindBuffer(GL_ARRAY_BUFFER,VBO);

	//��Ⱦѭ��
	while (!glfwWindowShouldClose(window))
	{
		//input
		processInput(window);

		//render
		glClearColor(0.2f,0.3f,0.3f,1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//draw triangle
		glUseProgram(shader.ID);
		float timeValue = glfwGetTime();
		float greenValue = sin(timeValue)/2.0f + 0.5f;
		shader.setVec4("ourColor",0.0f,greenValue,0.0f,0.0f);
		
		glDrawArrays(GL_TRIANGLES,0,3);


		//glfw��swap buffers , IO events
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glDeleteVertexArrays(1,&VAO);
	glDeleteBuffers(1,&VBO);

	//glfw������������Դ
	glfwTerminate();
	return 0;
}

void processInput(GLFWwindow* window)
{
	if (glfwGetKey(window,GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window,true);
	}
}

void framebuffer_size_callback(GLFWwindow* window,int width,int height)
{
	glViewport(0,0,width,height);
}