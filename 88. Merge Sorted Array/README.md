获得nums1尾部的索引tail，通过m向前遍历nums1，n向前遍历nums2  
每次比较m/n对应nums1/nums2的值，将较大者放置在tail的位置  
若m到nums1的头部，则用nums2前n项数据替换nums1前n项数据即可  
若n到nums2的头部，则无须操作了  