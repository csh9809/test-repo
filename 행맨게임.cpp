#include <iostream>
#include <string>
using namespace std;
/임행맨게임

int main()
{
	string answer = "system";             //answer은 정답의 역할 //std::string
	int length = answer.length();         //길이의 역할
	int tries = 0;                        //남은 횟수,시도횟수
	string view(length, '-');             //현재상태  string view(개수,문자)
	char ch;
	int pos;
	while (1)
	{
		system("cls");
		cout << "현재 상태:" << view << "\t" << "남은 횟수:" << 10 - tries << endl;
		cout << "추측 문자 입력:";
		cin >> ch;

		if (view.find(ch) != string::npos)
		{
			cout << "해당 문자는 이미 있습니다." << endl;
			system("pause");
			continue;
			
		}

		pos = answer.find(ch);

		if (answer.find(ch) == string::npos)
		{
			
			tries++;

			if (tries >= 10)
			{
				cout << "틀렸습니다. 정답은" << answer << "입니다" << endl;
				break;
			}
			cout << "해당 문자가 없습니다." << endl;

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
				cout << "정답을 맞췄습니다." << endl;
				break;
			}
			cout << "문자를 찾았습니다." << endl;
		}
		system("pause");
	}


	return 0;
}
