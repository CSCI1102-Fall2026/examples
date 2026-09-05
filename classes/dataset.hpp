using namespace std;

class dataset {
private:
    int *data;
    int capacity;
    int size;

public:
    dataset(int cap);
    ~dataset();

    void add_value(int x); 
    int& operator[](int index);
    int get_size(); 
};

ostream& operator<<(ostream &out, dataset& d);
