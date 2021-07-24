find的返回值是一个迭代器(iterator)，如果找到了会返回指向目标元素的迭代器，没找到会返回end()。


  unordered_map<int,int> nums1_map;  //建立哈希表
        for(auto i: nums1){
            nums1_map[i]++;
        }   //哈希表记录nums1的数字
        vector<int> ret;
        for(int i = 0; i < nums2.size(); i++){
            if(nums1_map.find(nums2[i]) != nums1_map.end()){  //在哈希表中查找元素
            ret.push_back(nums2[i]);
            //哈系表怎么减
            nums1_map[nums2[i]]--;
            if(nums1_map[nums2[i]] == 0)
            nums1_map.erase(nums2[i]);
            }
        }
        return ret;


        if (m.count(num)) {
                intersection.push_back(num);
                --m[num];
                if (m[num] == 0) {
                    m.erase(num);
                }
count更合适哎