double integral(double a, double b, unsigned int N, double(*f)(double)) {
	int sum = 0;
	double h = (b - a) / N;
	for (int i = 0; i < N; ++i) {
		sum += f(a + i * h);
	}
	return h * sum;
}
