#include <iostream>
#include <chrono>
#include <unistd.h>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

std::vector<std::string> matrix;
std::vector<int> space(50, 0);
std::vector<int> speed(50, 0);

std::string rnd_str() {
    std::string rnd;

    for (int i = 0; i < 50; ++i) {
        if (space[i] >= 12) {
            rnd += ' ';
        } else {
            int r = rand() % 100;

            if (r < 10) rnd += ' ';
            else if (r < 35) rnd += char(33 + rand() % 94);
            else rnd += char('0' + rand() % 10);
        }

        rnd += ' ';
    }

    return rnd;
}

void print_matrix() {
    std::cout << "\033[32m";

    for (auto it = matrix.rbegin(); it != matrix.rend(); ++it)
        std::cout << *it << '\n';

    std::cout << "\033[0m";
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < 1000; ++i) {
        for (int j = 0; j < 50; ++j) {
            if (space[j] <= 0) {
                space[j] = 8 + rand() % 25;
                speed[j] = 1 + rand() % 4;
            }
        }

        matrix.push_back(rnd_str());

        if (matrix.size() > 30)
            matrix.erase(matrix.begin());

        std::cout << "\033[H";
        print_matrix();
        std::cout.flush();

        for (int j = 0; j < 50; ++j)
            space[j] = std::max(0, space[j] - speed[j]);

        usleep(100000);
    }
}
