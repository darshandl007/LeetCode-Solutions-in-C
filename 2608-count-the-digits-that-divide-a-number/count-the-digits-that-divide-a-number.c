int countDigits(int num) {
    int count=0;
    if(num == 0){
        return 1;
    }
    int temp = num;
     while(temp != 0)
    {
        int digit = temp % 10;     // extract digit

        if(digit != 0 && num % digit == 0)  // does digit divide num?
            count++;

        temp = temp / 10;
    }

    return count;
}