/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef __WINE_CONFIG_H
#define __WINE_CONFIG_H
#ifndef WINE_CROSSTEST

#if 0
#define _X86_
#define __x86__

#else
#define _AMD64_
#define __x86_64__

#endif

/* Define to a function attribute for Microsoft hotpatch assembly prefix. */
//#define DECLSPEC_HOTPATCH __attribute__((__ms_hook_prologue__))
#define DECLSPEC_HOTPATCH
//#define WINE_DEFAULT_DEBUG_CHANNEL(x)
#define DECLSPEC_HIDDEN
#define __WINE_ALLOC_SIZE(x)

#define __WINESRC__
#define USE_WIN32_OPENGL

#undef HAVE___BUILTIN_POPCOUNT
#undef HAVE___BUILTIN_CLZ
#undef HAVE_FFS

#define FIXME_JY	0
#define HAVE_FLOAT_H	1
//#include "msvcrt\float.h"

// winuser.h !!!
#define DCX_USESTYLE         0x00010000


#define HAVE_SIZE_T	1

#define HAVE_ISFINITE	0
#define HAVE_ISINF		0
#define HAVE_ISNAN		0

/* Define to the file extension for executables. */
#define EXEEXT ""


/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1


/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 0

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 0

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 0

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 0

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the <stropts.h> header file. */
#define HAVE_STROPTS_H 0

/* Define to 1 if you have the `strtold' function. */
#define HAVE_STRTOLD 0

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 0

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 0

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the <syscall.h> header file. */
#define HAVE_SYSCALL_H 0

/* Define to 1 if you have the `sysinfo' function. */
#define HAVE_SYSINFO 1


/* Define to 1 if you have the `trunc' function. */
#define HAVE_TRUNC 0

/* Define to 1 if you have the `truncf' function. */
#define HAVE_TRUNCF 0

/* Define to 1 if you have the `udev' library (-ludev). */
/* #undef HAVE_UDEV */

/* Define to 1 if you have the <unistd.h> header file. */
//#define HAVE_UNISTD_H 0

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 0

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 0

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
/* #undef HAVE_VALGRIND_MEMCHECK_H */

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
/* #undef HAVE_VALGRIND_VALGRIND_H */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <X11/extensions/shape.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_SHAPE_H */

/* Define to 1 if you have the <X11/extensions/Xcomposite.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XCOMPOSITE_H */

/* Define to 1 if you have the <X11/extensions/xf86vmode.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XF86VMODE_H */

/* Define to 1 if you have the <X11/extensions/xf86vmproto.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XF86VMPROTO_H */

/* Define to 1 if you have the <X11/extensions/Xfixes.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XFIXES_H */

/* Define to 1 if you have the <X11/extensions/Xinerama.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XINERAMA_H */

/* Define to 1 if you have the <X11/extensions/XInput2.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XINPUT2_H */

/* Define to 1 if you have the <X11/extensions/XInput.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XINPUT_H */

/* Define to 1 if you have the <X11/extensions/Xrandr.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XRANDR_H */

/* Define to 1 if you have the <X11/extensions/Xrender.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XRENDER_H */

/* Define to 1 if you have the <X11/extensions/XShm.h> header file. */
/* #undef HAVE_X11_EXTENSIONS_XSHM_H */

/* Define to 1 if you have the <X11/Xcursor/Xcursor.h> header file. */
/* #undef HAVE_X11_XCURSOR_XCURSOR_H */

/* Define to 1 if you have the <X11/XKBlib.h> header file. */
/* #undef HAVE_X11_XKBLIB_H */

/* Define to 1 if you have the <X11/Xlib.h> header file. */
/* #undef HAVE_X11_XLIB_H */

/* Define to 1 if you have the <X11/Xutil.h> header file. */
/* #undef HAVE_X11_XUTIL_H */

/* Define to 1 if `xcookie' is a member of `XEvent'. */
/* #undef HAVE_XEVENT_XCOOKIE */

/* Define to 1 if `callback' is a member of `XICCallback'. */
/* #undef HAVE_XICCALLBACK_CALLBACK */

/* Define if you have the XKB extension */
/* #undef HAVE_XKB */

/* Define if libxml2 has the xmlDocProperties enum */
/* #undef HAVE_XMLDOC_PROPERTIES */

/* Define if libxml2 has the xmlFirstElementChild function */
/* #undef HAVE_XMLFIRSTELEMENTCHILD */

/* Define if libxml2 has the xmlNewDocPI function */
/* #undef HAVE_XMLNEWDOCPI */

/* Define if libxml2 has the xmlReadMemory function */
/* #undef HAVE_XMLREADMEMORY */

/* Define if libxml2 has the xmlSchemaSetParserStructuredErrors function */
/* #undef HAVE_XMLSCHEMASSETPARSERSTRUCTUREDERRORS */

/* Define if libxml2 has the xmlSchemaSetValidStructuredErrors function */
/* #undef HAVE_XMLSCHEMASSETVALIDSTRUCTUREDERRORS */

/* Define if Xrender has the XRenderCreateLinearGradient function */
/* #undef HAVE_XRENDERCREATELINEARGRADIENT */

/* Define if Xrender has the XRenderSetPictureTransform function */
/* #undef HAVE_XRENDERSETPICTURETRANSFORM */

/* Define if Xrandr has the XRRGetScreenResources function */
/* #undef HAVE_XRRGETSCREENRESOURCES */

/* Define to 1 if you have the `y0' function. */
#define HAVE_Y0 0

/* Define to 1 if you have the `y1' function. */
#define HAVE_Y1 0

/* Define to 1 if you have the `yn' function. */
#define HAVE_YN 0

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_ZLIB */

/* Define to 1 if you have the <zlib.h> header file. */
/* #undef HAVE_ZLIB_H */

/* Define to 1 if you have the `_finite' function. */
/* #undef HAVE__FINITE */

/* Define to 1 if you have the `_isnan' function. */
/* #undef HAVE__ISNAN */

/* Define to 1 if you have the `_pclose' function. */
/* #undef HAVE__PCLOSE */

/* Define to 1 if you have the `_popen' function. */
/* #undef HAVE__POPEN */

/* Define to 1 if you have the `_snprintf' function. */
/* #undef HAVE__SNPRINTF */

/* Define to 1 if you have the `_spawnvp' function. */
/* #undef HAVE__SPAWNVP */

/* Define to 1 if you have the `_strdup' function. */
/* #undef HAVE__STRDUP */

/* Define to 1 if you have the `_stricmp' function. */
/* #undef HAVE__STRICMP */

/* Define to 1 if you have the `_strnicmp' function. */
/* #undef HAVE__STRNICMP */

/* Define to 1 if you have the `_strtoi64' function. */
/* #undef HAVE__STRTOI64 */

/* Define to 1 if you have the `_strtoui64' function. */
/* #undef HAVE__STRTOUI64 */

/* Define to 1 if you have the `_vsnprintf' function. */
/* #undef HAVE__VSNPRINTF */

/* Define to 1 if you have the `__builtin_clz' built-in function. */
//#define HAVE___BUILTIN_CLZ 0

/* Define to 1 if you have the `__builtin_popcount' built-in function. */
//#define HAVE___BUILTIN_POPCOUNT 0

/* Define to 1 if you have the `__clear_cache' (potentially built-in)
   function. */
#define HAVE___CLEAR_CACHE 0

/* Define to 1 if you have the `__res_getservers' function. */
/* #undef HAVE___RES_GETSERVERS */

/* Define to 1 if you have the `__res_get_state' function. */
/* #undef HAVE___RES_GET_STATE */

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
#define MAJOR_IN_SYSMACROS 0

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "wine-devel@winehq.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Wine"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Wine 3.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "wine"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://www.winehq.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.3"

/* Define to the soname of the libcapi20 library. */
/* #undef SONAME_LIBCAPI20 */

/* Define to the soname of the libcups library. */
/* #undef SONAME_LIBCUPS */

/* Define to the soname of the libcurses library. */
/* #undef SONAME_LIBCURSES */

/* Define to the soname of the libdbus-1 library. */
/* #undef SONAME_LIBDBUS_1 */

/* Define to the soname of the libEGL library. */
/* #undef SONAME_LIBEGL */

/* Define to the soname of the libfontconfig library. */
/* #undef SONAME_LIBFONTCONFIG */

/* Define to the soname of the libfreetype library. */
/* #undef SONAME_LIBFREETYPE */

/* Define to the soname of the libGL library. */
/* #undef SONAME_LIBGL */

/* Define to the soname of the libGLESv2 library. */
/* #undef SONAME_LIBGLESV2 */

/* Define to the soname of the libGLU library. */
/* #undef SONAME_LIBGLU */

/* Define to the soname of the libgnutls library. */
/* #undef SONAME_LIBGNUTLS */

/* Define to the soname of the libgsm library. */
/* #undef SONAME_LIBGSM */

/* Define to the soname of the libgssapi_krb5 library. */
/* #undef SONAME_LIBGSSAPI_KRB5 */

/* Define to the soname of the libhal library. */
/* #undef SONAME_LIBHAL */

/* Define to the soname of the libjpeg library. */
/* #undef SONAME_LIBJPEG */

/* Define to the soname of the libkrb5 library. */
/* #undef SONAME_LIBKRB5 */

/* Define to the soname of the libncurses library. */
/* #undef SONAME_LIBNCURSES */

/* Define to the soname of the libnetapi library. */
#define SONAME_LIBNETAPI "libnetapi.so"

/* Define to the soname of the libodbc library. */
#define SONAME_LIBODBC "libodbc.so"

/* Define to the soname of the libopenal library. */
/* #undef SONAME_LIBOPENAL */

/* Define to the soname of the libOSMesa library. */
/* #undef SONAME_LIBOSMESA */

/* Define to the soname of the libpng library. */
/* #undef SONAME_LIBPNG */

/* Define to the soname of the libsane library. */
/* #undef SONAME_LIBSANE */

/* Define to the soname of the libSDL2 library. */
/* #undef SONAME_LIBSDL2 */

/* Define to the soname of the libtiff library. */
/* #undef SONAME_LIBTIFF */

/* Define to the soname of the libv4l1 library. */
/* #undef SONAME_LIBV4L1 */

/* Define to the soname of the libvulkan library. */
/* #undef SONAME_LIBVULKAN */

/* Define to the soname of the libX11 library. */
/* #undef SONAME_LIBX11 */

/* Define to the soname of the libXcomposite library. */
/* #undef SONAME_LIBXCOMPOSITE */

/* Define to the soname of the libXcursor library. */
/* #undef SONAME_LIBXCURSOR */

/* Define to the soname of the libXext library. */
/* #undef SONAME_LIBXEXT */

/* Define to the soname of the libXfixes library. */
/* #undef SONAME_LIBXFIXES */

/* Define to the soname of the libXi library. */
/* #undef SONAME_LIBXI */

/* Define to the soname of the libXinerama library. */
/* #undef SONAME_LIBXINERAMA */

/* Define to the soname of the libXrandr library. */
/* #undef SONAME_LIBXRANDR */

/* Define to the soname of the libXrender library. */
/* #undef SONAME_LIBXRENDER */

/* Define to the soname of the libxslt library. */
/* #undef SONAME_LIBXSLT */

/* Define to the soname of the libXxf86vm library. */
/* #undef SONAME_LIBXXF86VM */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to a macro to output a .cfi assembly pseudo-op */
#define __ASM_CFI(str) str

/* Define to a macro to define an assembly function */
#define __ASM_DEFINE_FUNC(name,suffix,code) asm(".text\n\t.align 4\n\t.globl " #name suffix "\n\t.type " #name suffix ",@function\n" #name suffix ":\n\t.cfi_startproc\n\t" code "\n\t.cfi_endproc\n\t.previous");

/* Define to a macro to generate an assembly function directive */
#define __ASM_FUNC(name) ".type " __ASM_NAME(name) ",@function"

/* Define to a macro to generate an assembly function with C calling
   convention */
#define __ASM_GLOBAL_FUNC(name,code) __ASM_DEFINE_FUNC(name,"",code)

/* Define to a macro to generate an assembly name from a C symbol */
#define __ASM_NAME(name) name

/* Define to a macro to generate an stdcall suffix */
#define __ASM_STDCALL(args) ""

/* Define to a macro to generate an assembly function with stdcall calling
   convention */
#define __ASM_STDCALL_FUNC(name,args,code) __ASM_DEFINE_FUNC(name,__ASM_STDCALL(args),code)

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

#endif /* WINE_CROSSTEST */
#endif /* __WINE_CONFIG_H */
