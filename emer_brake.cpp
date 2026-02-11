#include <iostream>
#include <vector>
using std::cout;
using std::vector;

struct emergency_brake {
    float speed;
    float distance;
    bool brake;

};

int main () {
    vector<emergency_brake> log = {{18,9,false},
                                   {25,30,true},
                                   {40,50,true},
                                   {60,70,false}};
    float safe_distance = 10;
    for (auto &entry: log) {
        if (entry.distance < safe_distance) {
            entry.brake = true;
            cout << "Emergency brake activated at speed: " << entry.speed << " \n";

        } else {
            cout << "No emergency brake needed at speed: " << entry.speed << " \n";
        }
    }

}
