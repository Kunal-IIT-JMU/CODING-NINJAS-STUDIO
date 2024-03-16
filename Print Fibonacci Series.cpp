vector<int> generateFibonacciNumbers(int n) {
    vector <int> nums;
    int k = 1;
    int a = 0;
    int b =1;
    repeat:
    if (k<=n){
        nums.push_back(a);
        k++;
        int temp = a;
        a = b;
        b = b + temp;
        goto repeat;
    }
    return nums;
}
