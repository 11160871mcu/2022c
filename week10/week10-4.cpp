int hammingWeight(uint32_t n) {
    int ans=0;
    while(n>0){
        int now=n%2;
        if(now==1)  ans++;
        n=n/2;
    }
    return ans;
}
