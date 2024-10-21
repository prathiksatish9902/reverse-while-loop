cmake_minimum_required(VERSION 3.16)

project(reverse_whileloop LANGUAGES C)

add_executable(reverse_whileloop main.c)

include(GNUInstallDirs)
install(TARGETS reverse_whileloop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
