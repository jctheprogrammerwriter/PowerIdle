#include <iostream>
import UserMod;

int main() {
    User user{"Jc"};
    std::cout << "Birth Year: " << user.get_year() << std::endl;
    std::cout << "Name: " << user.get_name() << std::endl;
    std::cout << "Age: " << user.get_age() << std::endl;
    std::cout << "Level: " << user.get_level() << std::endl;
    return 0;
}