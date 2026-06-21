int nextPrime(int n) {
    for (int num = n + 1; ; num++) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            return num;
    }
}