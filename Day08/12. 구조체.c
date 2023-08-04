#include <stdio.h>
#include <malloc.h>

// ����ü : ����ڰ� ���� �����ϴ� �ڷ���(User Define Type)
// - ������ �����ϴ� ���� �ڷ���/������ �����ؼ� ����
// - �ϳ��� ������ ���� �ٸ� ������ ���� ������ �� ����

// ����ü�� �����ϱ� - ��� �Լ� ��, ��ó���� �Ʒ�
// struct ��Ī : struct�� ����ü�� ����� �����. ��Ī�� ����ü��
struct person_info { 
	// ��������� ������ : �����̶� ǥ��������, ������ �ƴ�
	char name[11];
	int age;
	// ���� ����� �غ��ؼ� �ʿ���� ���� �� ���踦 ������
};

void EX1(void) {
	/*
	char name1[11] = "��浿";
	int age1 = 15;
	char name2[11] = "�Ѹ�";
	int age2 = 1500;
	printf("%s %d\n", name1, age1);
	printf("%s %d\n", name2, age2);
	*/
	// ����ü�� ����ϱ�
	// - �ڷ����̸� ������ ������ �� ����ϰ� ��
	struct person_info MrGo = { "��浿", 15 };	// ����ü������ ���� �� �ʱ�ȭ
	struct person_info MrDoo = { "�Ѹ�", 1500 };
	
	// - �� ������ ���ٸ� �׻� ���赵�ν� �۵��ϰ� ��
	printf("%s %d\n", MrGo.name, MrGo.age);		// ��������� ������
	printf("%s %d\n", MrDoo.name, MrDoo.age);	// . : ����ü���������
	
	// 1) �������� ���� �غ��� ��������� Ư���� �״�� ����
	// 2) ��������� ���� ����ü�� ���Ǿ����� ��� ������ �̸��� ����
	// 3) ����ü������ ��ó ������ �����ϰ� ��
	//    ex) ��浿�� <�̸�, ����> / �Ѹ��� <�̸�, ����>

	// �� ���� �ٸ� ������ �ϳ��� ����� ������ ���� ���� ��
}
void EX2(void) {
	struct person_info person1 = { "", 0 };
	// �Է��� �޴´ٰ� �ص�, �Ȱ���
	// - ��������� � ������ �˰� ������ ������� �Ȱ���
	// - ����ü ������ ��ó���Ҹ� �����ϱ� ������..
	//   ���� �Է¹޴� ���� �Ұ���
	printf("����� �̸�, ���̸� �Է��ϼ���\n>> ");
	scanf_s("%s", person1.name, sizeof(person1.name)/sizeof(char));
	scanf_s("%d", &person1.age);
	printf("�Էµ� ����\n%s, %d��\n", person1.name, person1.age);
}
void EX3(void) {
	// ����ü�� ������ ��������� ��������� ��
	// - ���� �ڷ����� �ٷ�� ���� �𸣸� ���Ⱑ �������
	struct person_info person1 = { "��浿", 45 };
	struct person_info person2;
	// - �ʱ�ȭ�� ���� �ϴ°� �ƴϸ�, �� ����� �׿� �´� ������� ���� �ϰ� ��
	person2.name[0] = 'A';
	person2.name[1] = 'B';
	person2.name[2] = 'C';
	person2.name[3] = 0;
	person2.age = 15;
	printf("%s %d\n", person2.name, person2.age);
	// ����ü�� ��°�� �����ϴ� ��쿡�� ���� �ڷ������� ��°�� �ְ���� �� ����
	// - ������ �ʿ䰡 ���� ���� ��
	// -> ����ü�� �⺻������ �Ŵ��� ����
	// -> ���� �ִ� ������ ��뷮�� 2��� �þ
	person2 = person1;
	printf("%s %d\n", person2.name, person2.age);
}
void EX4(void) {
	// ����ü�� "�Ŵ�"�ϴ�
	// - ����� �߰��� ������, �߰��� ������ ������
	// - ����ü�� �����ͺ��� �� �����Ҵ��� �̿��ϰ� ��
	
	// 1) �����ͺ��� - �غ����� ���� ����. �� �� �����ؾ� ��
	struct person_info* target = NULL;
	struct person_info entry = { "��浿", 45 };
	target = &entry;
	// - ������� �켱���� ������ ������ ���� �ؾ� ��
	printf("%s %d\n", (*target).name, (*target).age);
	// - �ٸ� �����ڷ� ��ü�ؼ� ������ ����ȭ��Ŵ
	printf("%s %d\n", target->name, target->age);
	// - ���� ȭ��ǥ�� �θ��� ����ü�����͸�������ڷ� ��ü�Ͽ� �����

	// ����ü�� ����� �Ϻη� �����ϴ°� �ƴ� �̻� "����"�� �⺻��
}

// typedef A B;
// - ����ü �ٷ� �Ʒ��� ���� ����� �����
// - A�� ���ؼ� B��� �߰���Ī�� �ο���
// - B�� �ᵵ A��� �νĵǵ��� �������
typedef struct person_info/*A*/ Info/*B*/;

void EX5(void) {
	int size = 0;
	// 2) ����ü������ �����Ҵ� - �ʼ�����
	Info* person = (Info*)malloc(sizeof(Info));
	// - �����Ҵ� ���� ������ ���ؼ� ������ �������� �Ǵ���
	if (person == NULL) printf("����\n");
	else {
		size = sizeof(person->name) / sizeof(char);
		for (int i = 0; i < size; i += 1) {
			person->name[i] = 0;
		}
		person->age = 0;
		printf("�Է� >> ");
		scanf_s("%s", person->name, size);
		scanf_s("%d", &person->age);
		printf("��� : %s, %d\n", person->name, person->age);
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