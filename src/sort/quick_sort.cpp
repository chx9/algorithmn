#include"sort/quick_sort.h"
#include "common/common.h"
#include <type_traits>
auto partition(vector<int> &vec, int low, int high) -> int{
    int pivot_val = vec[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(vec[j] < pivot_val){
            i++;
            std::swap(vec[i], vec[j]);
        }
    }
    i++;
    std::swap(vec[i], vec[high]);
    return i;
}
auto quick_sort(vector<int> &vec, int left, int right) -> void{
    if(left>=right){
        return;
    }
    int pivot = partition(vec, left, right);
    quick_sort(vec, left, pivot-1);
    quick_sort(vec, pivot+1, right);
}
auto quick_sort_main()->void{
   cout<<"=========="<<endl;
   cout<<"before quick sort"<<endl; 
   printf_vec(data);
   quick_sort(data, 0, data.size()-1);
   cout<<"after quick sort"<<endl;
   printf_vec(data);
   cout<<"=========="<<endl;
}

