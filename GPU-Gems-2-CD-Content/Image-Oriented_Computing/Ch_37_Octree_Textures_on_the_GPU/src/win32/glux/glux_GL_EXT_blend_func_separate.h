
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:35 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_EXT_blend_func_separate__
#define __GLUX_GL_EXT_blend_func_separate__

GLUX_NEW_PLUGIN(GL_EXT_blend_func_separate);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_BLEND_DST_RGB_EXT
#  define GL_BLEND_DST_RGB_EXT 0x80C8
#endif
#ifndef GL_BLEND_SRC_RGB_EXT
#  define GL_BLEND_SRC_RGB_EXT 0x80C9
#endif
#ifndef GL_BLEND_DST_ALPHA_EXT
#  define GL_BLEND_DST_ALPHA_EXT 0x80CA
#endif
#ifndef GL_BLEND_SRC_ALPHA_EXT
#  define GL_BLEND_SRC_ALPHA_EXT 0x80CB
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glBlendFuncSeparateEXT
typedef void (APIENTRYP PFNGLUXBLENDFUNCSEPARATEEXTPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glBlendFuncSeparateEXT
extern PFNGLUXBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
