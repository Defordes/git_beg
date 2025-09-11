#include <iostream>
#include <cmath>
#include <iomanip>
int main() { 
setlocale(LC_ALL, "RU");
double start, end, step; 
std::cout << "������� ��������� �������� x: "; 
std::cin >> start; 
std::cout << "������� �������� �������� x: "; 
std::cin >> end; 
std::cout << "������� ���: "; 
std::cin >> step;
if (step == 0) {
    std::cout << "������: ��� �� ����� ���� ����� 0!" << std::endl;
    return 1;
}
if ((start < end && step < 0) || (start > end && step > 0)) {
    std::cout << "������: ���� ���� �� ������������ ����������� ���������!" << std::endl;
    return 1;
}
std::cout << std::fixed << std::setprecision(6);
if (start < end) {
    for (double x = start; x <= end; x += step) {
        double y = sin(x);
        std::cout << "x =" << x << " | Y =" << y << std::endl;
    }
} else {
    for (double x = start; x >= end; x += step) {
    double y = sin(x);
        std::cout << "x = " << x << " y = " << y << std::endl;
        }
    
}
return 0;
}

    


