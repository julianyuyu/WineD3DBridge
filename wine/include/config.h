
#ifndef __WINE_CONFIG_ON_WINDOWS_H_
#define __WINE_CONFIG_ON_WINDOWS_H_
#define __WINE_CONFIG_H	/* define this for wine build checking */

#ifdef WIN32
#define _X86_
#define __i386__
#else
#define _AMD64_
#define __x86_64__
#endif

#if (defined(WINED3DBRIDGE_EXPORTS) || defined(D3D9_EXPORTS))
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

/* Define to a function attribute for Microsoft hotpatch assembly prefix. */
//#define DECLSPEC_HOTPATCH __attribute__((__ms_hook_prologue__))
#define DECLSPEC_HOTPATCH
#define DECLSPEC_HIDDEN

#define __WINE_ALLOC_SIZE(x)

#define __WINESRC__

#ifdef __WINESRC__
#define DLL_WINE_PREATTACH      8       /* called before process attach for Wine builtins */ /*but not used actually*/
#endif

/* Macros to map Winelib names to the correct implementation name */
/* Note that Winelib is purely Win32.                             */

#ifdef __WINESRC__
#define WINE_NO_UNICODE_MACROS 1
#define WINE_STRICT_PROTOTYPES 1
#endif

#ifdef WINE_NO_UNICODE_MACROS
# define WINELIB_NAME_AW(func) \
    func##_must_be_suffixed_with_W_or_A_in_this_context \
    func##_must_be_suffixed_with_W_or_A_in_this_context
#else  /* WINE_NO_UNICODE_MACROS */
# ifdef UNICODE
#  define WINELIB_NAME_AW(func) func##W
# else
#  define WINELIB_NAME_AW(func) func##A
# endif
#endif  /* WINE_NO_UNICODE_MACROS */

#ifdef WINE_NO_UNICODE_MACROS
# define DECL_WINELIB_TYPE_AW(type)  /* nothing */
#else
# define DECL_WINELIB_TYPE_AW(type)  typedef WINELIB_NAME_AW(type) type;
#endif


#define USE_WIN32_OPENGL

#undef HAVE___BUILTIN_POPCOUNT
#undef HAVE___BUILTIN_CLZ
#undef HAVE_FFS

#define FIXME_JY		0

// winuser.h !!!
#define DCX_USESTYLE         0x00010000


#define HAVE_FLOAT_H	1
#define HAVE_SIZE_T		1

#define HAVE_ISFINITE	1
#define HAVE_ISINF		1
#define HAVE_ISNAN		1
#define HAVE_LLRINT		1
#define HAVE_LLRINTF	1
#define HAVE_LRINT		1
#define HAVE_LRINTF		1
#define HAVE_RINT		1
#define HAVE_RINTF		1
#define HAVE_MEMMOVE	1

#define HAVE__STRICMP	1
#undef HAVE_STRCASECMP


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
//#define HAVE_STRCASECMP 0

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
//#define HAVE_STRNCASECMP 0

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

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

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

#endif /* __WINE_CONFIG_ON_WINDOWS_H */
