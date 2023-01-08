#pragma once
#include "common/common.h"
auto heap_sort(vector<int> &vec, int left, int right) -> void;
auto heapify(vector<int>& vec, int i, int sz) -> void;
auto build_heap(vector<int>& vec) -> void;
auto heap_sort_main() -> void;