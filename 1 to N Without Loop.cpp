vector<int> printNos(int x) {
    vector <int> num;
    int n = 1;
    repeat:
    if (n != x) {
        num.push_back(n);
        n++;
        goto repeat;
    }
    num.push_back(x);
    return num;
}
