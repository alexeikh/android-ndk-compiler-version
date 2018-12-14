#if __has_include(<android/ndk-version.h>)
#include <android/ndk-version.h>
#endif

#include <iostream>


int main() {

#if __NDK_MAJOR__
    std::cout << "Android NDK: version "
              << __NDK_MAJOR__ << "."
              << __NDK_MINOR__ << "\n";
#endif

#if __clang__
    std::cout << "Compiler: Clang version "
              << __clang_major__ << "."
              << __clang_minor__ << "."
              << __clang_patchlevel__
              << " (version string: " << __clang_version__ << ")\n";
#elif __GNUC__
    std::cout << "Compiler: GCC version "
              << __GNUC__ << "."
              << __GNUC_MINOR__ << "."
              << __GNUC_PATCHLEVEL__ << "\n";
#endif

#if LLVM_VERSION_MAJOR
    std::cout << "LLVM: version "
              << LLVM_VERSION_MAJOR << "."
              << LLVM_VERSION_MINOR << "."
              << LLVM_VERSION_PATCH
#  if LLVM_VERSION_STRING
              << " (version string: " << LLVM_VERSION_STRING << ")"
#  endif
              << "\n";
#endif

    std::cout << "C++ support level of the compiler (__cplusplus): " << __cplusplus << "\n";

#if _LIBCPP_VERSION
    std::cout << "STL: libc++ version " << _LIBCPP_VERSION << "\n";
#  if _LIBCPP_STD_VER
    std::cout << "C++ standard version of libc++ (_LIBCPP_STD_VER): " << _LIBCPP_STD_VER << "\n";
#  endif
#elif __GLIBCXX__
    std::cout << "STL: libstdc++ version " << __GLIBCXX__ << "\n";
#endif

#ifdef __gnu_linux__
    std::cout << "__gnu_linux__ is defined as: " << __gnu_linux__ << "\n";
#else
    std::cout << "__gnu_linux__ is not defined\n";
#endif

    return 0;
}
