project(example_test)

include(CTest)

if(BUILD_TESTING)
   set(HEADERS
      inc/Fixture.h
      )
   set(SOURCES
      src/ExampleTest.cpp
      )
   
   add_executable(example_test ${HEADERS} ${SOURCES})
   target_link_libraries(example_test PRIVATE GTest::gtest_main example_lib)

   include(GoogleTest)
   gtest_discover_tests(example_test)
endif()