// --------------------------------------------------------
#ifndef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
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

#ifndef __GLUX_GLX_OML_sync_control__
#define __GLUX_GLX_OML_sync_control__

GLUX_NEW_PLUGIN(GLX_OML_sync_control);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
#if defined(__STDC_VERSION__)
#if __STDC_VERSION__ >= 199901L
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glXGetSyncValuesOML
typedef Bool (APIENTRYP PFNXGLUXGETSYNCVALUESOMLPROC) (Display *dpy, GLXDrawable drawable, int64_t *ust, int64_t *msc, int64_t *sbc);
#endif
#ifndef __GLUX__GLFCT_glXGetMscRateOML
typedef Bool (APIENTRYP PFNXGLUXGETMSCRATEOMLPROC) (Display *dpy, GLXDrawable drawable, int32_t *numerator, int32_t *denominator);
#endif
#ifndef __GLUX__GLFCT_glXSwapBuffersMscOML
typedef int64_t (APIENTRYP PFNXGLUXSWAPBUFFERSMSCOMLPROC) (Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
#endif
#ifndef __GLUX__GLFCT_glXWaitForMscOML
typedef Bool (APIENTRYP PFNXGLUXWAITFORMSCOMLPROC) (Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t *ust, int64_t *msc, int64_t *sbc);
#endif
#ifndef __GLUX__GLFCT_glXWaitForSbcOML
typedef Bool (APIENTRYP PFNXGLUXWAITFORSBCOMLPROC) (Display *dpy, GLXDrawable drawable, int64_t target_sbc, int64_t *ust, int64_t *msc, int64_t *sbc);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glXGetSyncValuesOML
extern PFNXGLUXGETSYNCVALUESOMLPROC glXGetSyncValuesOML;
#endif
#ifndef __GLUX__GLFCT_glXGetMscRateOML
extern PFNXGLUXGETMSCRATEOMLPROC glXGetMscRateOML;
#endif
#ifndef __GLUX__GLFCT_glXSwapBuffersMscOML
extern PFNXGLUXSWAPBUFFERSMSCOMLPROC glXSwapBuffersMscOML;
#endif
#ifndef __GLUX__GLFCT_glXWaitForMscOML
extern PFNXGLUXWAITFORMSCOMLPROC glXWaitForMscOML;
#endif
#ifndef __GLUX__GLFCT_glXWaitForSbcOML
extern PFNXGLUXWAITFORSBCOMLPROC glXWaitForSbcOML;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
