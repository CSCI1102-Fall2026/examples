using namespace std;

class dog {
private:
    string name;
    unsigned int id;
    unsigned int hunger_level;
    unsigned int drool_level;

public:
    dog(string n, unsigned int i, unsigned int d);

    string get_name();
    unsigned int get_id();

    void play();
    void eat();
    void speak();
};

ostream& operator<<(ostream& out, dog& d);
