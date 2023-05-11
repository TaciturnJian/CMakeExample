#pragma once

#ifdef LIB2_SHARED_BUILD
#ifdef _WIN32
#ifdef LIB2_EXPORTS
#define LIB2_API __declspec(dllexport)
#else
#define LIB2_API __declspec(dllimport)
#endif  // LIB2_EXPORTS
#else
#define LIB2_API
#endif  // _WIN32
#else
#define LIB2_API
#endif  // LIB2_SHARED_BUILD
