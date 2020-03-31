#ifndef __H_PLATFORM__
#define __H_PLATFORM__

//https://blog.csdn.net/linuxheik/article/details/74628660


#if   defined(_WIN32)
#define WIN32
#define WINDOWS
#elif defined(__WIN64__)
#define WIN64
#define WINDOWS
#else
#define WIN32
#define WINDOWS
#endif

#endif