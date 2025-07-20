bool sumDivisible(int n){
    int dup = n;
    int sum = 0;
    while(dup>0){
        sum = sum + (dup%10);
        dup = dup/10;
    }
    int dup2 = n;
    int product = 1;
    while(dup2>0){
        product = product * (dup2%10);
        dup2 = dup2/10;
    }
    int total = sum+product;
    if (n%total == 0) return true;
    else return false;
}

bool checkDivisibility(int n) {
    if(sumDivisible(n)) return true;
    else return false;
}