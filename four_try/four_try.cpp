#include <iostream>

using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
    *p_HPPotion = 5;
    *p_MPPotion = 5;
}





int main()
{
    int status[4] = { 0, 0, 0, 0};
    

    cout << "HP와 MP를 설정하세요" << endl;
    cin >> status[0] >> status[1];

    int i = 0;

    while (i < 1)
    {
        if (status[0] > 50 && status[1] > 50)
        {
            cout << "플레이어 캐릭터의 HP가 " << status[0] << "으로 MP가 " << status[1] << "으로 설정되었습니다." << endl;
            ++i;
        }

        else
        {
            cout << "캐릭터의 HP 혹은 MP가 50미만일 수 없습니다. 다시 설정해주세요." << endl;
            cin >> status[0] >> status[1];
        }

    }

    i = 0;

    cout << "플레이어 캐릭터의 공격력과 방어력을 설정해주세요.(1이상)" << endl;
    cin >> status[2] >> status[3];

    while (i < 1)
    {
        if (status[2] > 0 && status[3] > 0)
        {
            cout << "플레이어 캐릭터의 공격력이 " << status[2] << "으로 방어력이 " << status[3] << "으로 설정되었습니다." << endl;
            ++i;
        }

        else
        {
            cout << "캐릭터의 공격력 혹은 방어력이 1미만일 수 없습니다. 다시 설정해주세요." << endl;
            cin >> status[2] >> status[3];
        }

    }

    cout << "다음 행동을 지정해주세요." << endl;
    cout << "1.HP UP / 2.MP UP / 3.공격력 UP / 4.방어력 UP / 5.현재 능력치 / 6.Level Up / 0.나가기";

    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;

    setPotion(5, &HPPotion, &MPPotion);

    cout << "포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl;
    cout << "==============================================" << endl;
    cout << "<스탯 관리 시스템>" << endl;

    while (1)
    {
        cout << "번호를 선택해주세요: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        switch (choice)
        {
        case 1:
            if (HPPotion <= 0)
            {
                cout << "포션이 부족합니다." << endl;
                continue;
            }
            status[0] += 20;
            HPPotion--;
            cout << "*HP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 남은 HP: " << status[0] << endl;
            cout << "남은 포션 수: " << HPPotion << endl;
            break;

        case 2:
            if (MPPotion <= 0)
            {
                cout << "포션이 부족합니다." << endl;
                continue;
            }
            status[1] += 20;
            MPPotion--;
            cout << "*MP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 남은 MP: " << status[1] << endl;
            cout << "남은 포션 수: " << MPPotion << endl;
            break;

        case 3 :
            if (status[2] >= 0)
            {
                status[2] *= 2;
                cout << "공격력이 두 배로 증가합니다." << endl;
                cout << "현재 공격력: " << status[2] << endl;
                break;
            }
        case 4:
            if (status[3] >= 0)
            {
                status[3] *= 2;
                cout << "방어력이 두 배로 증가합니다." << endl;
                cout << "현재 공격력: " << status[3] << endl;
                break;
            }
        case 5:
            if (1)
            {
                cout << "HP: " << status[0] << " MP: " << status[1] << " 공격력: " << status[2] << " 방어력: " << status[3] << endl;
                break;
            }

        case 6:
            if (1)
            {
                cout << "Level UP!";
                MPPotion++;
                HPPotion++;
                cout << "포션이 하나씩 추가되었습니다." << endl;
                break;
            }
        
        
        defualt:
            cout << "다시 입력하세요." << endl;
            break;
        }

    }

    return 0;
}