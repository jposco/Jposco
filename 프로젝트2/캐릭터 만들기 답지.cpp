#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

class Weapon {
protected:
    int power;          // ���ݷ�
    int remaining_hit;  // ���ݰ���Ƚ��
public:
    Weapon(int p, int r) : power(p), remaining_hit(r) {}
    virtual void attack() {};  // �����Լ�
    int get_power() {
        return power;
    }
    int get_remaining_hit() {
        return remaining_hit;
    }

    void minums_remaining_hit() {
        remaining_hit--;
    }
};
class Knife : public Weapon {
public:
    Knife() : Weapon(5, 3) {}
    void attack() override {
        cout << "��� !! ǫǫ" << endl;
    }
};

class Gun : public Weapon {
public:
    Gun() : Weapon(10, 1) {}
    void attack() override {
        cout << "�ѽ�� !! ����" << endl;
    }
};

class Character {
protected:
    int hp;
    int level;
    string name;
    vector<Weapon*> weapons;
public:
    Character(int hp, int level, string name) : hp(hp), level(level), name(name) {}
    void pick_up_weapon(Weapon* weapon) {
        weapons.push_back(weapon);
        cout << "���⸦ �ݽ��ϴ�." << endl;
    }
    void attack(Character* target) {
        if (weapons.empty()) {
            cout << "���Ⱑ �����ϴ�." << endl;
            return;
        }
        Weapon* weapon = weapons.back();  // ���� �ֱٿ� ���� ���� ���
        weapon->attack();
        cout << name << "��(��) " << target->get_name() << "��(��) �����߽��ϴ�." << endl;

        target->damage(weapon->get_power());
        weapon->minums_remaining_hit();

        if (weapon->get_remaining_hit() == 0) {
            weapons.pop_back();
            delete weapon;  // �޸� ����
        }
    }
    void damage(int damage) {
        hp -= damage;

        cout << name << "�� hp�� -" << damage << "��ŭ �����մϴ�" << endl;

        if (hp <= 0) {
            cout << name << "��(��) �׾����ϴ�." << endl;
        }
        else {
            cout << name << "�� ���� hp: " << hp << endl;
        }
    }
    string get_name() {
        return name;
    }
    int get_hp() {
        return hp;
    }
};

int user_turn() {
    int num;
    cout << "� ������ �ϰڽ��ϱ�? (1.���� ����   2.����): ";
    cin >> num;
    if (num == 1 || num == 2) return num;
    else return 0;
}

int user_pick_weapon() {
    int weapon;
    cout << "� ���⸦ �ݰڽ��ϱ�? (1.Į  2.��): ";
    cin >> weapon;
    if (weapon == 1 || weapon == 2) return weapon;
    else return 0;
}


int main() {
    string name1;
    cout << "ĳ���� �̸� �Է� : ";
    cin >> name1;
    Character* player1 = new Character(30, 1, name1);
    Character* computer = new Character(30, 1, "��ǻ��");

    std::srand(time(NULL)); // �Ź� �ٸ� ���� �����Ϸ��� srand() �Լ��� seed ����.

    bool turn = false; // 0�� �����, 1�� ��ǻ��

    while (1) {
        int num;
        Character* player;
        Character* enemy;
        if (turn) {
            cout << "[computer turn]" << endl;
            num = std::rand() % 2 + 1;
            player = computer;
            enemy = player1;
        }
        else {
            cout << "[" << name1 << " turn]" << endl;
            num = user_turn();
            player = player1;
            enemy = computer;
        }

        if (num == 1) {
            int weapon;
            turn ? weapon = std::rand() % 2 + 1 : weapon = user_pick_weapon();
            if (weapon == 1) player->pick_up_weapon(new Knife());
            else if (weapon == 2) player->pick_up_weapon(new Gun());
            else cout << "�׷� ����� �����ϴ�." << endl;
        }
        else if (num == 2) {
            player->attack(enemy);
            if (enemy->get_hp() <= 0) break;
        }
        else cout << "0~2 ������ ���� �Է��ϼ���." << endl;

        turn = !turn;
        cout << endl;
    }

    string winner = turn ? computer->get_name() : player1->get_name();
    cout << winner << " �¸�!";

    delete player1;
    delete computer;
    return 0;
}