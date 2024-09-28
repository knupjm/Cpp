#include <iostream>  // 입출력 스트림 헤더

using namespace std; // 표준 네임스페이스 사용

// 덧셈 연산을 위한 클래스
class Add {
private:
    int a, b; // 연산에 사용할 피연산자

public:
    void setValue(int x, int y); // 피연산자 설정
    int calculate();             // 덧셈 연산을 수행하고 결과를 반환
};

// 뺄셈 연산을 위한 클래스
class Sub {
private:
    int a, b; // 연산에 사용할 피연산자

public:
    void setValue(int x, int y); // 피연산자 설정
    int calculate();             // 뺄셈 연산을 수행하고 결과를 반환
};

// 곱셈 연산을 위한 클래스
class Mul {
private:
    int a, b; // 연산에 사용할 피연산자

public:
    void setValue(int x, int y); // 피연산자 설정
    int calculate();             // 곱셈 연산을 수행하고 결과를 반환
};

// 나눗셈 연산을 위한 클래스
class Div {
private:
    int a, b; // 연산에 사용할 피연산자

public:
    void setValue(int x, int y); // 피연산자 설정
    int calculate();             // 나눗셈 연산을 수행하고 결과를 반환
};

// Add 클래스의 setValue 함수 구현
void Add::setValue(int x, int y) {
    a = x;
    b = y;
}

// Sub 클래스의 setValue 함수 구현
void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}

// Mul 클래스의 setValue 함수 구현
void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}

// Div 클래스의 setValue 함수 구현
void Div::setValue(int x, int y) {
    a = x;
    b = y;
}

// Add 클래스의 calculate 함수 구현
int Add::calculate() {
    return a + b; // a와 b의 합을 반환
}

// Sub 클래스의 calculate 함수 구현
int Sub::calculate() {
    return a - b; // a와 b의 차를 반환
}

// Mul 클래스의 calculate 함수 구현
int Mul::calculate() {
    return a * b; // a와 b의 곱을 반환
}

// Div 클래스의 calculate 함수 구현
int Div::calculate() {
    return a / b; // a를 b로 나눈 몫을 반환
}

int main() {
    // 각 연산을 위한 객체 생성
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (true) { // 연속 연산을 위한 무한 루프
        cout << "두 정수와 연산자를 입력하세요>>"; // 사용자에게 입력 요청
        int x, y, result = 0; // 피연산자와 결과를 저장할 변수
        char op;              // 연산자를 저장할 변수
        cin >> x >> y >> op;  // 사용자로부터 피연산자와 연산자를 입력받음

        switch (op) { // 연산자에 따라 연산 결정
        case '+':
            a.setValue(x, y);       // 덧셈에 필요한 피연산자 설정
            result = a.calculate(); // 결과 계산
            break;
        case '-':
            s.setValue(x, y);       // 뺄셈에 필요한 피연산자 설정
            result = s.calculate(); // 결과 계산
            break;
        case '*':
            m.setValue(x, y);       // 곱셈에 필요한 피연산자 설정
            result = m.calculate(); // 결과 계산
            break;
        case '/':
            d.setValue(x, y);       // 나눗셈에 필요한 피연산자 설정
            result = d.calculate(); // 결과 계산
            break;
        default:
            continue; // 유효하지 않은 연산자; 다음 반복으로 넘어감
        }

        cout << result << endl; // 결과 출력
    }

    return 0; // 프로그램 종료 (무한 루프이므로 도달 불가능)
}