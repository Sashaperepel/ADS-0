// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int nod = 1;
    int min = 0;
    if (a < b) {
        min = a;
    }
    else {
        min = b;
    }
    for (int i = 1; i <= min; ++i) {
        if ((a % i == 0) && (b % i == 0)) {
            nod = i;
        }
    }
    return nod;
}
