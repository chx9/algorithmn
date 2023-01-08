#include<iostream>
#include"utils/utils.h"
#include"common/common.h"

void merge(vector<int>& vec, int left, int mid, int right){
    int sz1 = mid-left+1;
    int sz2 = right-(mid+1) + 1;
    vector<int> tp1(sz1);
    vector<int> tp2(sz2);
    int cur = left;
    for(cur=left;cur<=mid;cur++){
        tp1[cur-left] = vec[cur];
    }
    for(cur=mid+1;cur<=right;cur++){
       tp2[cur-mid-1] = vec[cur];
    }
    int cur1 = 0;
    int cur2 = 0;
    cur = left;
    while(cur1<tp1.size() && cur2<tp2.size()){
        if(tp1[cur1] < tp2[cur2]){
           vec[cur] = tp1[cur1++];
        }else{
           vec[cur] = tp2[cur2++];
        }
        cur++;
    }
    while(cur1<tp1.size()){
        vec[cur++] = tp1[cur1++];
    }
    while(cur2<tp2.size()){
        vec[cur++] = tp2[cur2++];
    }
}
void merge_sort(vector<int>& vec, int left, int right){
    if(left>=right){
        return;
    }
    int mid = left + (right-left)/2;
    merge_sort(vec, left, mid);
    merge_sort(vec, mid+1, right);
    merge(vec, left, mid, right);
}
void merge_sort_main(){
    std::cout<<"==========="<<std::endl;
    std::cout<<"before merge_sort"<<std::endl;
    printf_vec(data);
    merge_sort(data, 0, data.size()-1);
    std::cout<<"after merge_sort"<<std::endl;
    printf_vec(data);
    std::cout<<"==========="<<std::endl;
}
