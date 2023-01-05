find_package(GTest REQUIRED)

add_executable(my_sqrt_test my_sqrt_test.cpp)

target_link_libraries(my_sqrt_test
 PRIVATE
  GTest::GTest
  my_sqrt)

add_test(my_sqrt_gtests my_sqrt_test)
