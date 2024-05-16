long double integral(long double a, long double b, unsigned int N, long double(*f)(long double)) {
	long double sum = 0;
	long double h = (b - a) / N;
	for (int i = 0; i < N; ++i) {
		sum += f(a + i * h);
	}
	return h * sum;
}
