using namespace std;

class cat : public pet {
protected:
    bool has_hairballs;

public:
    cat(string n, unsigned int i, bool h);
    void speak() override;
};
