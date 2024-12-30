bool isPalindrome(int x) {
    int i = 0;
    int rev = 0;
    int rem = 0;
    int temp = x;
    if (x < 0){
        return false;
    }

    while(temp != 0){
        rem = temp%10;
        if (rev > (INT_MAX / 10) || (rev == (INT_MAX / 10) && rem > 7)) {
            return 0; // Overflow would occur
        }
        rev = rev*10+rem;
        temp = temp/10;
    }

    if (rev == x){
        return true;
    }
    else {
        return false;
    }
}