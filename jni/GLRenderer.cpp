//
//  FileManager.hpp
//  CatchLib
//
//  Created by John Barbero Unenge on 9/17/12.
//  Copyright (c) 2012 John Barbero Unenge. All rights reserved.
//

#if TARGET_OS_IPHONE
#include <OpenGLES/ES1/glext.h>
#else
//#include <GLES/glext.h>
#endif

#include "Logger.hpp"
#include "GLRenderer.hpp"

GLRenderer::GLRenderer()
{
	Log("Constructed a GLRenderer!");
}
GLRenderer::~GLRenderer()
{
	Log("Desteructed a GLRenderer!");
}


void GLRenderer::init(int width, int height)
{
	Log("Derp" + 5 + 6);
}

void GLRenderer::render()
{

}
