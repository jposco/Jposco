using namespace std;

//�Լ� ���� / �Լ� ����
//�Ű����� ����(��ȣ�ȿ� �����־���Ѵ� Ÿ�� ���x), ��ȯ���� ����(���� �������� �����ش�)
//1. �Ű����� x return x
//����Ÿ��:int, string, float -> void
//void test_1() {
//	cout << test_1()
//}
	
//2. �Ű����� 0 return x
//void test_2(int num, string str, int num3) {}

//3. �Ű����� 0 return 0
//string test_3(int num, string str) {
//���ǹ�, ��ɹ�
//return "test"
//}
	
//4. �Ű����� x return 0 //���ϰ��� ������ void x
//int test_4() {
//cout << "tset_4 : �Ű����� x return 0";
//cout << "�ȳ�";
//return 5;
//}
	
	//�Լ��� ȣ��
		int main() {
			test_1();
			test_2(1, "str");
			//����(1,str)
			int num = 5;
			string str = "str";
			test_3(num, str);
			test_4();  //=�ᱹ�� 5�� �´� ���ϰ��� 5�̹Ƿ�...
	}
	
		�Ű������� �Լ��� �ܺο��� ���Ǵ� ���� ���ο���.
		���ϰ��� ���ο��� ���� ���� �Լ��� �ܺο��� ����ϰ� ������

	�� ���� ������ �Ű� ������ �޾� �� ���� �����ϴ� multiple�Լ��� ���弼��

	//Ÿ�� 3--------------------------------------------------------------------
	int multiple(int num1, int num2) {//�� ���� ������ �Ű� ������ �޾�
	//	int result = num1 * num2;
	//	return result;
		return num1 * num2;//�װ��� �����ϴ� �Լ�
	}
	
	int main() {//��Ƽ���� Ȱ���Ͽ� ����ϴ� �ڵ�.
		cout << multiple(4, 5);
	}
	
	//�ΰ��� ������ �Ű������� �޾� �װ��� ����ϴ� �Լ��� ���弼��
	//void multiple(int num1, int num2) {
	//	cout << num1 * num2;
	//}