#ifndef _MY_HEADER_H_
#define _MY_HEADER_H_

// Your header content
#include<vector>
#include<iostream>
using std::cout;
using std::endl;
using std::vector;
static vector<int> data{12, 11, 13, 5, 6, 7};
inline void printf_vec(vector<int> &vec){
    for(auto& ele:vec){
        cout<<ele<<" ";
    }
    cout<<endl;
}

#endif // _MY_HEADER_H_