#include"sort/buble_sort.h"
#include <type_traits>
auto buble_sort(vector<int>& vec) -> void{
    for(int i=0;i<vec.size();i++){
       for(int j=0;j<vec.size()-i;j++){
        if(vec[j-1]>vec[j]){
            std::swap(vec[j-1], vec[j]);
        }
       } 
    }

}
auto buble_sort_main() -> void {
    
    std::cout<<"==========="<<std::endl;
    std::cout<<"before buble_sort"<<std::endl;
    printf_vec(data);
    buble_sort(data);
    std::cout<<"after buble_sort"<<std::endl;
    printf_vec(data);
    std::cout<<"==========="<<std::endl;
}