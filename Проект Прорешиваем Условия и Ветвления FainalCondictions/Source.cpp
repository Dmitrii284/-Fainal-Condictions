#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
		// ������ 1 
		//
		//��������� ����������� � ������������ ������ � ����� . ��������� ������� TRUE,
		//���� ��� ��� ���������� �������, ������ ��� �����.
		//� ��������� ������ FALSE


	cout << " ������� ������ -> ";
	char sym;
	cin >> sym;
	cout << "������� ����� -> ";
	cin >> n;
	if (sym > n)
		cout << "TRUE \n\n";
	else
		cout << "FALES\n\n";


	// ������ 2
	//������������ ������ ������� ������� �����. ������ �������� ��� ���������� (��������� �������� � ��� �������))

	//cout << "������� ������� ������� ����� -> ";
	//cin >> n;
	//// ����� ��������� � ���������� � ����� ��������� �� .....
	//int n1000 = n / 1000;
	//int n100 = n / 100 % 10;
	//int n10 = n / 10 % 10;
	//int n1 = n % 10;
	//if (n1000 == n1 && n100 == n10)
	//	cout << " �����" << n << "��������� ����������\n\n";
	//else
	//	cout << " ����� �� �������� ���������� \n\n";

	// ������ 3

	//�������� ��������� ������� ��������� ���������������� �����
	//	� ������� ���������������� 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
	                               //0 1 2 3 4 5 6 7 8 9 10 A B C D E F  

	//cout << " ������� ���������������� ����� -> ";
	//char hex;
	//cin >> hex;
	//switch (hex) {
	//case '0': case '1':	case '2': case '3':	case '4':
	//case '5': case '6': case '7': case '8':	case '9':
	//	// � ������ ���� ������������ ��������
	//	cout << hex << " HEX = " << hex << " DEC\n\n";
	//	break;
	//case 'a': case 'A':
	//	cout << "A HEX = 10 DEC\n\n";
	//	break;
	//case 'b': case 'B':
	//		cout << "B HEX = 11 DEC\n\n";
	//		break;
	//case 'c': case 'C':
	//		cout << "C HEX = 12 DEC\n\n";
	//		break;
	//case 'd': case 'D':
	//		cout << "D HEX = 13 DEC\n\n";
	//		break;
	//case 'e': case 'E':
	//		cout << "E HEX = 14 DEC\n\n";
	//		break;
	//case 'f': case 'F':
	//		cout << "F HEX = 15 DEC\n\n";
	//		break;
	//	default:
	//		cout << "������ �����! \n\n";
	//}

	// ������ 4 
	// ������������ ������ ����������� ����� � �� ������ ����� ������ � � �����.

	/*cout << "������� ����������� ����� -> ";
	cin >> n;
	cout << n / 10000 + n % 10000 * 10 << "\n\n";*/

	// ������ 5 �������� ���������- ������������
	/*��������� ������ ������������ 3 ������� � 3 ���������� ������.
		������������ �������� �� ������� � ����� ������ ���� ���������!!!*/
	/*cout << " ������ �1. ������� ���� ������ �������� ��� float?\n";
	int score = 0;
	cout << "1. 4 �����; \n";
	cout << "2. 6 �����; \n";
	cout << "3. 8 �����; \n";
	cout << "����� ������ -> ";
	cin >> n;
	if (n == 1)
		score++;
	cout << "������ �2. ����� ���������� �������� ��� char?\n";
	cout << "1. �� -128 �� 127\n";
	cout << "2. �� 0 �� 127 \n";
	cout << "3. �� 0 �� 125 \n";
	cout << "����� ������ -> ";
	cin >> n;
	if (n == 3)
		score++;
	cout << "������ �3. ������� ���������� ������� ��������� ����-����? \n";
	cout << "1. 4 ����; \n";
	cout << "2. 5 ����; \n";
	cout << "3. 6 ����; \n";
	cout << "����� ������ -> ";
	cin >> n;
	if (n == 2)
		score++;
	cout << "���-�� ���������� ������� " << score << " .\n";*/

	// ������ 7
	//��������� � ������������ ������������ � ������� �� � ������ �� �������
	//�� 200 �� 300 - 3%, �� 300 �� 500 - 5% , �� 500 - � ���� -7%.
	/*cin >> n;
	double price;
	if (n >= 200 && n < 300)
		price = n * 0.97;
	else
		if (n >= 300 && n < 500)
			price = n * 0, 95;
		else
			if (n >= 500)
				price = n * 0, 93;
			else
				price = n;*/


	// ������ 9
	/*��������� ��������� � ������������ ����� �� 1 - 4 ����� ������������ ������ �������������� ���������� �����
		��������� ������� ����� . �� ������� �������������� � ������������ ���������.*/
	//������ ���������� ����� � �������� ���������� �������� ���� ���������� �� �������������.
	//cout << "������� ���������� ����� �� 1 �� 4) -> ";

	//cin >> n;

	//unsigned int num, counter =0, sum =0, max = 0;
	//switch (n) {
	//case 4:
	//	counter++;
	//	cout << "������� �����" << counter <<" - � ����� -> ";
	//	cin >> num;
	//	sum += num;
	//	max = num > max ? num : max; //���������� ��������� ��������
	//case 3:
	//	counter++;
	//	cout << "������� �����" << counter << " - � ����� -> ";
	//	cin >> num;
	//	sum += num;
	//	max = num > max ? num : max;
	//case 2:
	//	counter++;
	//	cout << "������� �����" << counter << " - � ����� -> ";
	//	cin >> num;
	//	sum += num;
	//	max = num > max ? num : max;		
	//case 1:
	//	counter++;
	//	cout << "������� �����" << counter << " - � ����� -> ";
	//	cin >> num;
	//	sum += num;
	//	cout << "����� ����� = " << sum << ".\n";
	//	cout << "������� �������������� = " << (double)sum / n << ".\n"; // ����������� ������ ���� ����� ���� � ���� - ����� �����.
	//	cout << "�������� = " << max << ".\n";

	//	break;

	//default:

	//	cout << " ������ ����� !\n";
	//}


	return 0;
}