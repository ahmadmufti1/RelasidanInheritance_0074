#include <iostream>
using namespace std;

// class User
class User {
protected:
    static int globalId;

public:
    int id;
    string nama;
    string email;

    User(string pNama, string pEmail) : nama(pNama), email(pEmail) {
        id = generateId();
    }

    int generateId() {
        return ++globalId;
    }
};

int User::globalId = 0;

// class Member yang mewarisi class User
class Member : public User {
public:
    bool status;

    Member(string pNama, string pEmail, bool pStatus) : User(pNama, pEmail), status(pStatus) {
        
    }

    void profil() {
        cout << "ID : " << id << endl;
        cout << "Nama : " << nama << endl;
        cout << "Email : " << email << endl;

        if (status == true)
        {
            cout << "Status : Aktif" << endl;
        }
        else
        {
            cout << "Status : Nonaktif" << endl;
        }
        cout << endl;
    }
};

// class Admin yang mewarisi class User
class Admin : public User {
public:

    Admin(string pNama, string pEmail) : User(pNama, pEmail) {
        
    }

    void showAllMember(Member m1, Member m2) {
        m1.profil();
        m2.profil();
    }

    void toggleActivationMember(Member &member) {
        member.status = !member.status;
    }
};

//program utama
int main() {

    Member member1("Budi", "budi@gmail.com", true);
    Member member2("Andi", "andi@gmail.com", false);

    Admin admin("Admin", "admin@gmail.com");

    cout << "\nSebelum diubah" << endl;
    admin.showAllMember(member1, member2);

    // ubah status member1
    admin.toggleActivationMember(member1);

    cout << "Sesudah diubah" << endl;
    admin.showAllMember(member1, member2);

    return 0;
}