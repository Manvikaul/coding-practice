//coding ninjas
//code to find out and return the number of digits present in a number recursively.

int count(int n){
    if(n == 0){
        return 0;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}
