//#include <iostream>
//#include <locale>
//
//using namespace std;

//int salario(int a, int b);
//
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//	int num1, num2, num3;
//
//	cout << "Qual � o seu n�mero de funcion�rio? ";
//	cin >> num1;
//	cout << "Quantas horas voc� trabalha? ";
//	cin >> num2;
//	cout << "Qual o valor que voc� recebe? ";
//	cin >> num3;
//
//	int resultado = salario(num2, num3);
//
//	cout << "O funcion�rio " << num1 << " tem o sal�rio de: " << resultado << " reais";
//}
//
//int salario(int a, int b) {
//	return a * b;
//}


//int pagamento(double a, double b, double c, double d);
//
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//	double num1, num2, num3, num4;
//
//	cout << "Qual � o valor do produto? ";
//	cin >> num1;
//	cout << "Qual a quantidade? ";
//	cin >> num2;
//	cout << "Qual � o valor do outro produto? ";
//	cin >> num3;
//	cout << "Qual a quantidade? ";
//	cin >> num4;
//
//
//	double resultado = pagamento(num1, num2, num3, num4);
//
//	cout << "Valor de pagamento: " << resultado << " reais";
//}
//
//int pagamento(double a, double b, double c, double d) {
//	return (a * b) + (c * d);
//}

//a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
//F�rmula: A * C / 2.0
//b) a �rea do c�rculo de raio C. (pi = 3.14159)
//F�rmula: 3.14159 * C * C
//c) a �rea do trap�zio que tem A e B por bases e C por altura.
//F�rmula: (A + B) / 2.0 * C
//d) a �rea do quadrado que tem lado B.
//F�rmula: B * B
//e) a �rea do ret�ngulo que tem lado A e altura B.
//F�rmula: A * B

//double triangulo(double a, double c);
//double circulo(double c);
//double trapezio(double a, double b, double c);
//double quadrado(double b);
//double retangulo(double a, double c);
//
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//	double num1, num2, num3;
//
//	cout << "Informe o valor de A: ";
//	cin >> num1;
//	cout << "Informe o valor de B: ";
//	cin >> num2;
//	cout << "Informe o valor de C: ";
//	cin >> num3;
//
//	double resultado1 = triangulo(num1, num3);
//	double resultado2 = circulo(num3);
//	double resultado3 = trapezio(num1, num2, num3);
//	double resultado4 = quadrado(num2);
//	double resultado5 = retangulo(num1, num2);
//
//	cout << " Tri�ngulo: " << resultado1;
//	cout << "\n C�rculo: " << resultado2;
//	cout << "\n Trap�zio: " << resultado3;
//	cout << "\n Quadrado: " << resultado4;
//	cout << "\n Ret�ngulo: " << resultado5;
//
//}
//
//double triangulo(double a, double c) {
//	return (a * c) / 2.0;
//}
//
//double circulo(double c) {
//	return 3.14159 * c * c;
//}
//
//double trapezio(double a, double b, double c) {
//	return (a + b) / 2.0 * c;
//}
//
//double quadrado(double b) {
//	return b * b;
//}
//
//double retangulo(double a, double b) {
//	return a * b;
//}