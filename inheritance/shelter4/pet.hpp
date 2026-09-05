using namespace std;

class pet {
protected:
    string name;
    unsigned int id;
    unsigned int hunger_level;

public:
    pet(string n, unsigned int i);

    string get_name();
    unsigned int get_id();

    void play();
    void eat();
    virtual void speak();
};

ostream& operator<<(ostream& out, pet& p);
