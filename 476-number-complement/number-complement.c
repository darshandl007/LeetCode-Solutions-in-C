int findComplement(int num) {

    int bit=0;
    int temp=num;
    int mask=0;

   while (temp)
    {
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }

    return (~num) & mask;
}