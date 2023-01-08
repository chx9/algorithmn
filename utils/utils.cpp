#include"utils/utils.h"
auto printf_vec(std::vector<int>& vec) -> void{
    for(int i=0;i<vec.size();i++){
        std::cout<<vec[i];
    }
    std::cout<<std::endl;
}