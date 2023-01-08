#include"sort/heap_sort.h"
#include "common/common.h"
#include <type_traits>
#include <utility>
auto heapify(vector<int> &vec, int i, int sz) -> void{
    int left = i*2+1;
    int right = i*2+2;
    int largest = i;
    if(left<sz && vec[largest] < vec[left]){
        largest = left;
    }
    if(right<sz && vec[largest] < vec[right]){
        largest = right;
    }
    if(largest!=i){
        std::swap(vec[i], vec[largest]);
        heapify(vec, largest, sz);
    }
}
auto build_heap(vector<int>& vec) -> void {
    for(int i=vec.size()/2-1;i>=0;i--){
        heapify(vec, i, vec.size()-1);
    }
}
auto heap_sort(vector<int>& vec, int left, int right) -> void{
    build_heap(vec);    
    int sz = vec.size();
    for(int i=0;i<vec.size();i++){
        std::swap(vec[0], vec[--sz]);
        heapify(vec, 0, sz);
    }
}
auto heap_sort_main() -> void{
    cout<<"=========="<<endl;
    cout<<"before heap_sort"<<endl;
    printf_vec(data);
    heap_sort(data, 0, data.size()-1);
    cout<<"after heap_sort"<<endl;
    printf_vec(data);
    cout<<"=========="<<endl;
}
