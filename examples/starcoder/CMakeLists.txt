#
# starcoder

set(TEST_TARGET starcoder)
add_executable(${TEST_TARGET} main.cpp)
target_link_libraries(${TEST_TARGET} PRIVATE ggml common common-ggml)

#
# starcoder-quantize

set(TEST_TARGET starcoder-quantize)
add_executable(${TEST_TARGET} quantize.cpp)
target_link_libraries(${TEST_TARGET} PRIVATE ggml common common-ggml)

add_library(starcoder_lib starcoder_lib.cpp starcoder_lib.h)
target_link_libraries(starcoder_lib PUBLIC ggml common common-ggml)
install(TARGETS starcoder_lib DESTINATION lib)