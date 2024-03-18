#pragma once

#include "PCH.hpp"

#if defined(__GNUC__)
#define FORCE_INLINE_ __attribute__((always_inline)) inline
#elif defined(_MSC_VER)
#define FORCE_INLINE_ __forceinline
#else
#define FORCE_INLINE_ inline
#endif

#define LOG_IF(cond, fmt, ...)                                                      \
  do {                                                                              \
    if (cond)                                                                       \
      print(fmt, #__VA_ARGS__);                                                     \
  } while (0);

template <typename... A>
FORCE_INLINE_ void print(const std::string_view fmt, A &&...args)
{
  std::cout << vformat(fmt, std::make_format_args(args...)) << std::flush;
}
