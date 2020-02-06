
// converts celcius to fahrenheit
double cel_to_fahr(double temp){
    return ( ( ( temp * 9 ) / 5)  + 32 );
}
// converts fahrenheit to celcius
double fahr_to_cel(double temp) {
    return ( ( (temp - 32 ) * 5) / 9);
}