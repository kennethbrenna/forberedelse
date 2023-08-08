function(create_test name)
    add_executable(${name} ${name}.cpp)
    target_include_directories(${name} PUBLIC "${CMAKE_SOURCE_DIR}/include")
    target_link_libraries(${name} PRIVATE Catch2::Catch2 srcLib)
    add_test(NAME ${name} COMMAND ${name})
endfunction()

create_test(tests)