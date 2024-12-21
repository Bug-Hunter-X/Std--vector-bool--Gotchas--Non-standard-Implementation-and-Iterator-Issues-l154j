# std::vector<bool> Gotchas: Non-standard Implementation and Iterator Issues

This repository demonstrates common pitfalls encountered when using `std::vector<bool>` in C++.  `std::vector<bool>`'s space optimization, while beneficial, deviates from the standard container interface and causes unexpected behavior with iterators and some algorithms.

The `vectorBoolBug.cpp` file showcases a scenario where the non-standard implementation leads to errors. The `vectorBoolSolution.cpp` file provides a corrected approach using alternative containers or techniques to avoid these issues.  This example highlights the importance of understanding `std::vector<bool>`'s specific characteristics to prevent subtle bugs.