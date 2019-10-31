#include <iostream>
#include<time.h>

class EvenRandom{
public:
    int next();
    int nextInRange(int i, int f);
};

int EvenRandom::next() {
    return rand();
}
int EvenRandom::nextInRange(int i, int f) {

    return rand()%(f-i+1) + i;
}

int main() {
    srand(time(NULL));
    EvenRandom r;
    std::cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << std::endl;
    for (int i = 0; i < 10; ++i) {
        int n = r.next();
        std::cout << n << ' ';
    }
    std::cout << std::endl << "-- 2에서 10까지의 랜덤 정수 10개 --" << std::endl;
    for (int i = 0; i < 10; ++i) {
        int n = r.nextInRange(2,10);
        std::cout << n << ' ';
    }
    std::cout << std::endl;

    return 0;
}