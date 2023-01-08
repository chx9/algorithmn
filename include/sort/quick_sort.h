#include "common/common.h"
#include <memory>

auto quick_sort_main() -> void;
auto quick_sort(vector<int> &vec, int left, int right) -> void;
auto partition(vector<int> &vec, int low, int high) -> int;