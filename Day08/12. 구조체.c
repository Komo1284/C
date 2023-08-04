#include <stdio.h>
#include <malloc.h>

// 구조체 : 사용자가 직접 정의하는 자료형(User Define Type)
// - 기존에 존재하던 각종 자료형/구조를 조합해서 만듬
// - 하나의 변수에 서로 다른 종류의 값을 저장할 수 있음

// 구조체를 정의하기 - 모든 함수 위, 전처리문 아래
// struct 명칭 : struct는 구조체를 만드는 예약어. 명칭은 구조체명
struct person_info { 
	// 멤버변수를 선언함 : 선언이라 표현하지만, 선언이 아님
	char name[11];
	int age;
	// 변수 목록을 준비해서 필요공간 산출 및 설계를 수행함
};

void EX1(void) {
	/*
	char name1[11] = "고길동";
	int age1 = 15;
	char name2[11] = "둘리";
	int age2 = 1500;
	printf("%s %d\n", name1, age1);
	printf("%s %d\n", name2, age2);
	*/
	// 구조체를 사용하기
	// - 자료형이며 변수를 선언할 때 사용하게 됨
	struct person_info MrGo = { "고길동", 15 };	// 구조체변수의 선언 및 초기화
	struct person_info MrDoo = { "둘리", 1500 };
	
	// - 그 변수를 쓴다면 항상 설계도로써 작동하게 됨
	printf("%s %d\n", MrGo.name, MrGo.age);		// 멤버연산을 수행함
	printf("%s %d\n", MrDoo.name, MrDoo.age);	// . : 구조체멤버연산자
	
	// 1) 가져오는 값은 준비한 멤버변수의 특성을 그대로 따라감
	// 2) 멤버변수는 같은 구조체가 사용되었으면 모두 동일한 이름을 가짐
	// 3) 구조체변수는 출처 역할을 수행하게 됨
	//    ex) 고길동의 <이름, 나이> / 둘리의 <이름, 나이>

	// ※ 서로 다른 값들을 하나의 공통된 주제로 묶어 쓰는 것
}
void EX2(void) {
	struct person_info person1 = { "", 0 };
	// 입력을 받는다고 해도, 똑같음
	// - 멤버변수가 어떤 것인지 알고 있으면 사용방식은 똑같음
	// - 구조체 변수는 출처역할만 수행하기 때문에..
	//   직접 입력받는 것은 불가능
	printf("사람의 이름, 나이를 입력하세요\n>> ");
	scanf_s("%s", person1.name, sizeof(person1.name)/sizeof(char));
	scanf_s("%d", &person1.age);
	printf("입력된 정보\n%s, %d세\n", person1.name, person1.age);
}
void EX3(void) {
	// 구조체는 언제나 멤버변수를 지정해줘야 함
	// - 각각 자료형을 다루는 법을 모르면 쓰기가 어려워짐
	struct person_info person1 = { "고길동", 45 };
	struct person_info person2;
	// - 초기화를 같이 하는게 아니면, 각 멤버는 그에 맞는 방법으로 따로 하게 됨
	person2.name[0] = 'A';
	person2.name[1] = 'B';
	person2.name[2] = 'C';
	person2.name[3] = 0;
	person2.age = 15;
	printf("%s %d\n", person2.name, person2.age);
	// 구조체를 통째로 복사하는 경우에는 같은 자료형끼리 통째로 주고받을 수 있음
	// - 복사할 필요가 있을 때만 함
	// -> 구조체는 기본적으로 거대한 변수
	// -> 쓰고 있던 공간의 사용량이 2배로 늘어남
	person2 = person1;
	printf("%s %d\n", person2.name, person2.age);
}
void EX4(void) {
	// 구조체는 "거대"하다
	// - 멤버의 추가는 쉽지만, 추가될 때마다 느려짐
	// - 구조체는 포인터변수 및 동적할당을 이용하게 됨
	
	// 1) 포인터변수 - 준비방식은 거의 동일. 쓸 때 주의해야 함
	struct person_info* target = NULL;
	struct person_info entry = { "고길동", 45 };
	target = &entry;
	// - 멤버연산 우선순위 때문에 참조를 먼저 해야 함
	printf("%s %d\n", (*target).name, (*target).age);
	// - 다른 연산자로 대체해서 과정을 간략화시킴
	printf("%s %d\n", target->name, target->age);
	// - 보통 화살표라 부르는 구조체포인터멤버연산자로 대체하여 사용함

	// 구조체의 사용은 일부러 복사하는게 아닌 이상 "공유"가 기본임
}

// typedef A B;
// - 구조체 바로 아래에 보통 만들어 사용함
// - A에 대해서 B라는 추가명칭을 부여함
// - B를 써도 A라고 인식되도록 만들어줌
typedef struct person_info/*A*/ Info/*B*/;

void EX5(void) {
	int size = 0;
	// 2) 구조체변수의 동적할당 - 필수과정
	Info* person = (Info*)malloc(sizeof(Info));
	// - 동적할당 받은 변수에 대해서 동일한 과정으로 판단함
	if (person == NULL) printf("실패\n");
	else {
		size = sizeof(person->name) / sizeof(char);
		for (int i = 0; i < size; i += 1) {
			person->name[i] = 0;
		}
		person->age = 0;
		printf("입력 >> ");
		scanf_s("%s", person->name, size);
		scanf_s("%d", &person->age);
		printf("결과 : %s, %d\n", person->name, person->age);
	}
	if (person != NULL) {
		free(person);
		person = NULL;
	}
}

int main(void) {
	// EX1();
	// EX2();
	// EX3();
	// EX4();
	EX5();
	return 0;
}