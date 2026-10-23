bool isPerfectSquare(int num) {
    for(long int i=1;i * i <=num;i++){    // long used to avoid the space complexity
        if(i * i == num)
        return true;
    }
    return false;
}
