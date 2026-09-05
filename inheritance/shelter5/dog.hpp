using namespace std;

class dog : public pet {
protected:
    unsigned int drool_level;

public:
    dog(string n, unsigned int i, unsigned int d);

    void speak() override;
};
