
double power(double base, int exp){
    /*
        0 ^ 0 = 0
        0 ^ -1 = 0
    */
    if(base == 0){
        return 0;
    }
    // if positive exponent, normal exponentiation
    if( exp == 0) {
        return 1;
    }
    if (exp == 1)
        return base;
    if(exp > 1){
        return base * power(base, --exp);
    // else, it's the reciprocal
    }
    else {
        return ( 1 / (double) base) * power(base, ++exp);
    }
    
}