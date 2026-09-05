#include <iostream>
using namespace std;

class jukebox {
private:
    string songs[3];
    int playing;

public:
    jukebox(string s1, string s2, string s3) {
        songs[0] = s1;
        songs[1] = s2;
        songs[2] = s3;
        playing = -1;
    }

    void play(int song) {
        if (song < 1 or song > 3) {
            cout << "Don't know that song!" << endl;
            return;
        }
        playing = song-1;
    }

    void stop() {
        playing = -1;
    }
    
    string output() {
        if (playing == -1) {
            return "silence";
        }
        return "playing: " + songs[playing];
    }

};

int main() {
    jukebox box("a","b","c");

    cout << box.output() << endl;
    box.play(1);
    cout << box.output() << endl;
    box.play(4);
    box.play(2);
    cout << box.output() << endl;
    box.stop();
    cout << box.output() << endl;
    
    return 0;
}

