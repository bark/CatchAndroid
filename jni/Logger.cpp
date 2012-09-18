//
//  Logger.hpp
//  CatchLib
//
//  Created by John Barbero Unenge on 9/17/12.
//  Copyright (c) 2012 John Barbero Unenge. All rights reserved.
//
#include <android/log.h>
#include "Logger.hpp"

void Log(const char* message)
{
	__android_log_write(ANDROID_LOG_INFO, "CatchLogger", message);
}
