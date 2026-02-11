#include<iostream>
#include<vector>
using std::cout;
using std::vector;

struct collision_risk {
    float speed;
    float distance;
    bool brake;
};

int main () {
    vector<collision_risk> log = {{14,4,false},
                                  {18, 10,false},
                                  {15,15,false},
                                  {10,10,false}};
    float safe_speed = 10;
    float safe_distance = 5;
    for (auto &entry: log) {
        if( entry.speed > safe_speed && entry.distance < safe_distance) {
            entry.brake = true;
            cout << "Braking speed: " << entry.speed << " Distance: " << entry.distance << "\n";
        }
        else {
            cout << "No braking needed safe event " << entry.speed << " " << entry.distance <<"\n";
        }
    }
}

