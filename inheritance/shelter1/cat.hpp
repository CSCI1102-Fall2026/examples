using namespace std;

class cat {
private:
    string name;
    unsigned int id;
    unsigned int hunger_level;
    bool has_hairballs;

public:
    cat(string n, unsigned int i, bool h);

    string get_name();
    unsigned int get_id();

    void play();
    void eat();
    void speak();
};

ostream& operator<<(ostream& out, cat& c);
