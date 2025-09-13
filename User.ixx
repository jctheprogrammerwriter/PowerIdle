//
// Created by jc on 13/09/2025.
//
module;

import LimitsMod;
#include <string>
#include <utility>
export module UserMod;

export class User {

public:
    User() = default;

    explicit User(const std::string& user_name) : _name(std::move(user_name)) {}

    // Getters
    std::string get_name() const {
        return _name;
    }

    int get_age() const {
        return _age;
    }

    int get_year() const {
        return _year;
    }

    int get_level() const {
        return _level;
    }

    // Setters
    void set_name(const std::string &new_name) {
        _name = new_name;
    }

    void set_age(const int new_age) {
        _age = new_age;
    }

    void set_year(const int new_year) {
        _year = new_year;
    }

    void set_level(const int new_level) {
        _level = new_level;
    }

    // Modifiers
    void add_age(const int new_age) {
        _age += new_age;
    }

    void add_year(const int new_year) {
        _year += new_year;
    }

    bool add_level(const int new_level) {
        if (new_level > get_level_limit()) return false;
        _level += new_level;
        return true;
    }

private:
    std::string _name{};
    int _age{18};
    int _year{2025};
    int _level{0};
};

