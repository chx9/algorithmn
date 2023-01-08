#pragma once
#include"common/common.h"
auto merge_sort(vector<int>& vec, int left, int right) -> void;
void merge(vector<int>& vec, int left, int mid, int right);
void merge_sort_main();