#include <iostream>
#include <string>
using namespace std;

int main()
{
	string answer = "system";             //answer�� ������ ���� //std::string
	int length = answer.length();         //������ ����
	int tries = 0;                        //���� Ƚ��,�õ�Ƚ��
	string view(length, '-');             //�������  string view(����,����)
	char ch;
	int pos;
	while (1)
	{
		system("cls");
		cout << "���� ����:" << view << "\t" << "���� Ƚ��:" << 10 - tries << endl;
		cout << "���� ���� �Է�:";
		cin >> ch;

		if (view.find(ch) != string::npos)
		{
			cout << "�ش� ���ڴ� �̹� �ֽ��ϴ�." << endl;
			system("pause");
			continue;
			
		}

		pos = answer.find(ch);

		if (answer.find(ch) == string::npos)
		{
			
			tries++;

			if (tries >= 10)
			{
				cout << "Ʋ�Ƚ��ϴ�. ������" << answer << "�Դϴ�" << endl;
				break;
			}
			cout << "�ش� ���ڰ� �����ϴ�." << endl;

		}
		else
		{
			
			
			while (pos != string::npos)
			{
				view[pos] = ch;
				pos = answer.find(ch, pos + 1);
			}

			if (answer == view)
			{
				cout << "������ ������ϴ�." << endl;
				break;
			}
			cout << "���ڸ� ã�ҽ��ϴ�." << endl;
		}
		system("pause");
	}


	return 0;
}