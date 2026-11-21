#include <string>
#include <vector>

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void greatest_divisor() {
    int a = 48, b = 18;
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    (void)a;
}

extern "C" int misty_crescent();
extern "C" void brisk_harbor();
extern "C" void quiet_canyon();
extern "C" void golden_ripple();

int main() {
    double_value();
    text_contains();
    count_spaces();
    greatest_divisor();
    brisk_harbor();
    quiet_canyon();
    golden_ripple();
    return misty_crescent();
}
