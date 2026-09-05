#include <iostream>
using namespace std;

/* expected output:
Catan(4): 2
 */
class boardgame {
private:
    string name;
    unsigned int num_players;
    unsigned int num_plays;

public:
    boardgame(string n, unsigned int np) {
        name = n;
        num_players = np;
        num_plays = 0;
    }

    void play() {
        num_plays++;
    }

    void print() {
        cout << name << "(" << num_players << ")";
        cout << ": " << num_plays << endl;
    }
};

int main() {
    boardgame *bg = new boardgame("Catan", 4); 

    bg->play();
    bg->play();
    bg->print();

    return 0;
}

