#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint VBO0, VAO0, EBO0, texture0; //Ruangan
	GLuint shaderProgram, VBO, VAO, EBO, texture; //Meja
	GLuint VBO2, VAO2, EBO2, texture2; //Lantai
	GLuint VBO3, VAO3, EBO3, texture3; //Kursi
	GLuint VBO4, VAO4, EBO4, texture4; //Kasur
	GLuint VBO5, VAO5, EBO5, texture5; //Bantal
	GLuint VBO6, VAO6, EBO6, texture6; //PenyanggaKasur
	GLuint VBO7, VAO7, EBO7, texture7; //Pintu
	GLuint VBO8, VAO8, EBO8, texture8; //Komputer
	GLuint VBO9, VAO9, EBO9, texture9; //Layar Komputer
	GLuint VBO10, VAO10, EBO10, texture10; //Keyboard
	GLuint VBO11, VAO11, EBO11, texture11; //Body Keyboard
	GLuint VBO12, VAO12, EBO12, texture12; //Mouse
	GLuint VBO13, VAO13, EBO13, texture13; //CPU
	GLuint VBO14, VAO14, EBO14, texture14; //Depan CPU
	GLuint VBO15, VAO15, EBO15, texture15; //Lemari
	GLuint VBO16, VAO16, EBO16, texture16; //Depan Lemari
	GLuint VBO19, VAO19, EBO19, texture19; //Lukisan 1
	GLuint VBO20, VAO20, EBO20, texture20; //Lukisan 2
	GLuint VBO21, VAO21, EBO21, texture21; //Lukisan 2
	GLuint VBO22, VAO22, EBO22, texture22; //Lampu Atas hitam
	GLuint VBO23, VAO23, EBO23, texture23; //Lampu Atas putih
	GLuint VBO24, VAO24, EBO24, texture24; //Drawer
	GLuint VBO25, VAO25, EBO25, texture25; //Drawer Top
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	//Ruangan
	void BuildColoredRoom();
	void DrawColoredRoom();
	//Meja
	void BuildColoredCube();
	void DrawColoredCube();
	//Kursi
	void BuildColoredKursi();
	void DrawColoredKursi();
	//Kasur
	void BuildColoredKasur();
	void DrawColoredKasur();
	//Bantal
	void BuildColoredBantal();
	void DrawColoredBantal();
	//PenyanggaKasur
	void BuildColoredPenyanggakasur();
	void DrawColoredPenyanggakasur();
	//Pintu
	void BuildColoredPintu();
	void DrawColoredPintu();
	//Komputer
	void BuildColoredKomputer();
	void DrawColoredKomputer();
	//Layar Komputer
	void BuildColoredLayar();
	void DrawColoredLayar();
	//Keyboard
	void BuildColoredKeyboard();
	void DrawColoredKeyboard();
	//Body Keyboard
	void BuildColoredBodykeyboard();
	void DrawColoredBodykeyboard();
	//Mouse
	void BuildColoredMouse();
	void DrawColoredMouse();
	//CPU
	void BuildColoredCPU();
	void DrawColoredCPU();
	//Depan CPU
	void BuildColoredDepanCPU();
	void DrawColoredDepanCPU();
	//Lemari
	void BuildColoredLemari();
	void DrawColoredLemari();
	//Depan Lemari
	void BuildColoredDepanLemari();
	void DrawColoredDepanLemari();
	//Lukisan 1
	void BuildColoredLukisan1();
	void DrawColoredLukisan1();
	//Lukisan 2
	void BuildColoredLukisan2();
	void DrawColoredLukisan2();
	//Karpet
	void BuildColoredKarpet();
	void DrawColoredKarpet();
	//Lampu Atas Hitam
	void BuildColoredLampu1();
	void DrawColoredLampu1();
	//Lampu Atas Putih
	void BuildColoredLampu2();
	void DrawColoredLampu2();
	//Drawer
	void BuildColoredDrawer();
	void DrawColoredDrawer();
	//Drawer Top
	void BuildColoredDrawerTop();
	void DrawColoredDrawerTop();
	//Lantai
	void BuildColoredPlane();
	void DrawColoredPlane();
	//Camera
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

