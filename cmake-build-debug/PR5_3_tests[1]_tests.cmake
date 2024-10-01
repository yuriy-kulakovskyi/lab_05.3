add_test([=[p.TESTp]=]  [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_3/cmake-build-debug/PR5_3_tests]==] [==[--gtest_filter=p.TESTp]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[p.TESTp]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_3/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  PR5_3_tests_TESTS p.TESTp)
