// Last updated: 19/2/2026, 9:13:57 am
bool isPowerOfTwo(int n) {
    if (n<0) return false;
    int *res = malloc(32*sizeof(int));
    for (int i=0;i<=31;i++){
        res[i] = pow(2,i);
    }
    for (int i=0;i<=31;i++){
        if (n==res[i]) return true;
    }
    return false;
    }