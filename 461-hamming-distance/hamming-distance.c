int hammingDistance(int x, int y) {
    
    int count=0;
        int res= x^y;
        while(res){
        if(res&1){
            count++;
        }
        res=res>>1;
        }
        
    return count;
}