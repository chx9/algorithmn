#include<iostream>
#include"sort/merge_sort.h"
#include"sort/heap_sort.h"
#include"sort/quick_sort.h"
#include"sort/buble_sort.h"
using namespace std;
int main(){
    merge_sort_main();
    heap_sort_main();
    quick_sort_main();
    buble_sort_main();
    return 0;
}