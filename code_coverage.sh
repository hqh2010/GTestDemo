#!/bin/bash

# 此脚本生成行覆盖率报告路径：build/coverage/coverage_report/index.html

if [ ! -d "build" ];then
mkdir build
else
rm -rf build && mkdir build
fi

cd build && cmake .. && make -j
cd test
./func_test
cd ../../

REPORT_FOLDER=build/coverage/coverage_report
mkdir -p ${REPORT_FOLDER}
COVERAGE_FILE=build/coverage/coverage.info
lcov --rc lcov_branch_coverage=1 -c -d build/test/CMakeFiles/func_test.dir -o ${COVERAGE_FILE}_tmp
lcov --rc lcov_branch_coverage=1  -e ${COVERAGE_FILE}_tmp "*src*" -o ${COVERAGE_FILE}
genhtml --rc genhtml_branch_coverage=1 ${COVERAGE_FILE} -o ${REPORT_FOLDER}