#include "com_catch22_chainsaw_GameActivity.h"
#include "Logger.hpp"
#include "GLRenderer.hpp"

JNIEXPORT void JNICALL Java_com_catch22_chainsaw_GameActivity_createGLRenderer(JNIEnv *env, jclass clazz)
{
	GLRenderer* renderer = new GLRenderer();
	renderer->init(1,2);
	Log("Derp");
}
