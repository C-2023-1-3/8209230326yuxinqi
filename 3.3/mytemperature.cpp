double celsius_to_fah(double cel) {
	double fah = 9.0 * cel / 5.0 + 32.0;
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel = 5.0* (fah - 32.0) / 9.0;
	return cel;
}