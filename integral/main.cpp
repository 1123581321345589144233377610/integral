#include "func.h"
#include "integral.h"

int main() {
	long double a, b, integral1, integral2, diff;
	setlocale(LC_ALL, "rus");
	std::cout << "������� ����� � ������ ����� ��������� ��������������: \n";
	std::cin >> a >> b;
	for (int i = 1; ; i = 2 * i) {
		integral1 = integral(a, b, i, f);
		integral2 = integral(a, b, 2 * i, f);
		diff = fabs(integral1 - integral2);
		if (diff < 1e-9) {
			break;
		}
	}
	std::cout << "\n���� �������� ���������: " << std::setprecision(19) << integral2;
	return 0;
}