# CMPUT 402 C/C++ Static Analysis Tools Demo

## CPPCheck

* Follow the instructions on the [cppcheck website](http://cppcheck.sourceforge.net/) to install cppcheck

* Once you have it installed, run `cppcheck test.c` (`test.c` is inside the `SamplePrograms` folder)

## FlawFinder

* Follow instructions on the [FlawFinder website](https://dwheeler.com/flawfinder/) to install the tool

* Run `flawfinder SamplePrograms/`

## Clang Static Analyzer

* Download the appropriate binary for your OS from the [website](https://clang-analyzer.llvm.org/)

* Run `scan-build gcc test.c`
