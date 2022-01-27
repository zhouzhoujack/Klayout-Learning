#ifndef HDR_tlArch
#define HDR_tlArch

#include "tlCommon.h"

#include <string>

namespace tl
{

/**
 *  @brief Returns the architecture string
 *
 *  The architecture string is made from the cpu, os and compiler.
 *  For example: i686-win32-mingw or x86_64-linux-gcc.
 */
TL_PUBLIC std::string arch_string ();

}

#endif

