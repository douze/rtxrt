find_package(Magnum REQUIRED GL Sdl2Application)

set_directory_properties(PROPERTIES CORRADE_USE_PEDANTIC_FLAGS ON)

add_executable(RTxRT main.cpp)
target_link_libraries(RTxRT PRIVATE
    Magnum::Application
    Magnum::GL
    Magnum::Magnum)
