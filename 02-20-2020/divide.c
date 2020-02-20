int divide( int dividend, int divisor){
    if(dividend == 0)
        return 0;
    if (dividend < divisor)
        return 0;
    else 
        return 1 + divide( dividend - divisor, divisor );
}