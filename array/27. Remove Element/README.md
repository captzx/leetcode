两个指向数组尾部的指针，frontit向前迭代，backit记录最后一个与val不同的值的位置  
当frontit指向的值与val相同时，则用backit的值替换之，backit向前迭代一步  
frontit遍历完成后，backit - front + 1即为所求值  