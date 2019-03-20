#include<iostream>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void color(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
void sub1()
{
	int x, y;
	cin >> x >> y;
	int z = x * y;
	cout << "곱 = " << z << endl;
	cin.ignore();
	//문자 = char , string
	char a[] = {"hello"};
	char b[10];
	//cin >> b;
	cin.getline(b, 10);
	cout << "문자1 : " << b << endl;
	cin.ignore(-1);

	string c;
	//cin >> c;
	getline(cin, c);
	cout << "문자2 : " << c << endl;
	cin.ignore();
}
////int area(int w,int h) 
////{
//// cout << "너비를 입력하세요 >> ";
////
//// int w;
//// cin >> w;
////
//// cout << "높이를 입력하세요 >> ";
////
//// int h;
//// cin >> h;
////
//// cout << "면적은 : " << area(w, h) << endl;
////
//// return a;
////}
void fun1()
{
	char name[10];
	cout << "이름을 입력 :";
	cin.getline(name, 10);
	cout << "당신의 이름은 : " << name << "입니다." << endl;
	string addr;
	cout << "주소 입력 : ";
	getline(cin, addr);
}
void ex1()
{
	srand(time(NULL));
	int a = rand() % 6 + 1;
	int b = rand() % 6 + 1;

	cout << a << endl;
	cout << b << endl;
	cout << "주사위 합 " << a + b << endl;


}
void ex2()
{
	int x;
	int y;
	cout << "x값을 입력하세요 : " ;
	cin >> x;
	cout << "y값을 입력하세요 : ";
	cin >> y;

	if (x > y) {
	cout << "x가 y보다 더 큽니다" << endl;
	}
	else
	cout << "y가 x보다 더 큽니다" << endl;

}
void ex3()
{
	int age;
	cout << "나이를 입력하세요 : ";
	cin >> age;
	if (age < 14) {
		cout << "어린이입니다"<<endl;
	}
	else if (age < 20) {
		cout << "청소년입니다"<<endl;
	}
	else
		cout << "성인입니다"<<endl;
}
void ex4()
{
	for (int i = 10; i > 0; i--){
	cout << i << " ";
	Sleep(1000);

	}
	cout << "발사!" << endl;
}
void ex5()
{
	string animal;
	for (int i = 0; i < 10; i++) {
		cout << "문자열을 입력하시오: ";
		getline(cin, animal);
		cout << "사용자의 입력 : " << animal << endl;
		if (animal == "종료") {
			break;
		}
	}
}
void ex6()
{
	int mo = 0;
	int ja = 0;
	string en;

	cout << "영문자를 입력하고 콘트롤-Z를 치세요" << endl;
	while (cin >> en) {
		if (en == "a" || en == "e" || en == "i" || en == "o" || en == "u") {
			ja++;
		}
		else {
			mo++;
		}
	}
		cout << "자음 : " << ja << endl;
		cout << "모음 : " << mo << endl;
	
}
void ex7()
{
	srand(time(NULL));
	int num;
	int co = 1;
	int computer = rand() % 100 + 1;
	while (true)
	{
		cout << "정답을 추측하여 보시오 : ";
		cin >> num;
		if (computer > num) {
			cout << "제시한 정수가 높습니다." << endl;
			co++;
		}
		else if (computer < num) {
			cout << "제시한 정수가 낮습니다." << endl;
			co++;
		}
		else {
			cout << "축하합니다." << "시도횟수 = " << co <<endl;
			break;
		}

	}

}

void ex8() 
{
	srand(time(NULL));
	int a[10];
	int max = a[0];
	

	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100 + 1;
		cout << a[i] << " " ;
		
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << "최대값 : " << max << endl;
	
}


void ex9()
{
	string dna1, dna2;
	cout << "DNA1 입력 : ";
	cin >> dna1;
	cout << "DNA2 입력 : ";
	cin >> dna2;
	cout << "DNA1 : " << dna1 << endl;
	cout << "DNA2 : " << dna2 << endl;;
	int num = 0;
	for (int i = 0; i < dna1.size(); i++) {
		if (dna1[i] != dna2[i])
		num++;
	}
		cout << "해밍 거리는 " << num << endl;
}

void ex10()
{
	string size[3][3];



}

int main()
{
	/*std::cout << "안녕" << std::endl;
	system("pause");
	system("cls");
	cout << "하세요\n";
	color(rand()%100);
	gotoxy(5, 10);
	cout << "굿모닝" << endl;*/


	//sub1();
	//fun1();
	//ex1();
	//ex2();
	//ex3();
	//ex4();
	//ex5();
	//ex6();
	//ex7();
	//ex8();
	//ex9();
	ex10();

	return 0;
}
