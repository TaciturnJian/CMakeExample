#pragma once

#ifdef LIB1_SHARED_BUILD
#ifdef _WIN32
#ifdef LIB1_EXPORTS
#define LIB1_API __declspec(dllexport)
#else
#define LIB1_API __declspec(dllimport)
#endif  // LIB1_EXPORTS
#else
#define LIB1_API
#endif  // _WIN32
#else
#define LIB1_API
#endif  // LIB1_SHARED_BUILD
