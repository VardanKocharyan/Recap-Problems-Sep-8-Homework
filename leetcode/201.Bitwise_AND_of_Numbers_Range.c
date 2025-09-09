int rangeBitwiseAnd(int left, int right) {
    int res1 = left;
    int res2 = right;
    while((left < right) && res1 && res2 && res1 & res2) {
        res1 &= (++left);
        res2 &= --right;
        
    }

    return res1 & res2;
}
