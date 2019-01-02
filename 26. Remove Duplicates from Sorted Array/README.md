设置两个指针frontit，backit指向数组头部，backit向前遍历数组  
若backit指向的值与frontit指向的值不同，则frontit向后迭代一次，并将其制设置为backit所指向的值  
backit遍历完成后，frontit - begin() + 1即为所求值  