/* autotoolsconfig.h.  Generated from autotoolsconfig.h.in by configure.  */
/* autotoolsconfig.h.in.  Generated from configure.ac by autoheader.  */


#ifndef __AUTOTOOLSCONFIG_H__
#define __AUTOTOOLSCONFIG_H__ 1


/* */
/* #undef ENABLE_CREDENTIAL_STORAGE */

/* */
/* #undef ENABLE_JIT */

/* Define to enable Opcode statistics */
/* #undef ENABLE_OPCODE_STATS */

/* */
#define ENABLE_PLUGIN_PROCESS 1

/* */
#define ENABLE_SPELLCHECK 1

/* Minimum GTK/GDK version required */
#define GDK_VERSION_MIN_REQUIRED GDK_VERSION_3_6

/* The gettext catalog name */
#define GETTEXT_PACKAGE "WebKitGTK-3.0"

/* */
/* #undef GTK_API_VERSION_2 */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <EGL/egl.h> header file. */
#define HAVE_EGL_EGL_H 1

/* Define to 1 if you have the <GLES2/gl2.h> header file. */
/* #undef HAVE_GLES2_GL2_H */

/* Define to 1 if you have the <GL/glx.h> header file. */
#define HAVE_GL_GLX_H 1

/* Define to 1 if you have the <GL/gl.h> header file. */
#define HAVE_GL_GL_H 1

/* Define if GTK+ UNIX Printing is available */
#define HAVE_GTK_UNIX_PRINTING 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define if pthread rwlock is present */
#define HAVE_PTHREAD_RWLOCK 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unicode/uchar.h> header file. */
/* #undef HAVE_UNICODE_UCHAR_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <webp/decode.h> header file. */
#define HAVE_WEBP_DECODE_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* */
#define MOZ_X11 1

/* Define to disable debugging */
#define NDEBUG 1

/* Name of package */
#define PACKAGE "webkitgtk"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugs.webkit.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "WebKitGTK"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "WebKitGTK 2.2.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "webkitgtk"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.2.0"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* */
/* #undef UNICODE */

/* The major version used in user agent string */
#define USER_AGENT_GTK_MAJOR_VERSION 538

/* The minor version used in user agent string */
#define USER_AGENT_GTK_MINOR_VERSION 1

/* Version number of package */
#define VERSION "2.2.0"

/* Define if target is Wayland */
/* #undef WTF_PLATFORM_WAYLAND */

/* Define if target is X11 */
#define WTF_PLATFORM_X11 1

/* */
/* #undef WTF_SYSTEM_MALLOC */

/* */
#define WTF_USE_ACCELERATED_COMPOSITING 1

/* */
#define WTF_USE_EGL 1

/* */
#define WTF_USE_GLX 1

/* */
#define WTF_USE_GSTREAMER 1

/* */
#define WTF_USE_OPENGL 1

/* */
/* #undef WTF_USE_OPENGL_ES_2 */

/* */
#define WTF_USE_TEXTURE_MAPPER 1

/* */
#define WTF_USE_TEXTURE_MAPPER_GL 1

/* 1 */
#define WTF_USE_WEBAUDIO_GSTREAMER 1

/* */
#define XP_UNIX 1

/* */
/* #undef XP_WIN */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* */
/* #undef _UNICODE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */


#include "WebKitFeatures.h"
#endif // __AUTOTOOLSCONFIG_H__

