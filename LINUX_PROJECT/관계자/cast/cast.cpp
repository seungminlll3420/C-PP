#include "cast.h"

void cast::set(string name, int age, string Entertainment) {
        this->name = name;
        this->age = age;
        this->Entertainment = Entertainment;

}
void cast::modify(string name, int age, string Entertainment) {

}
void cast::setname(string name) {
        this->name = name;
}
void cast:: setage(int age) {
        this->age = age;
}
void cast::setEntertainment(string Entertainment) {
        this->Entertainment = Entertainment;
}
string cast::getname() {
        return name;
}
int cast::getage() {
        return age;
}
string cast::getEntertainment() {
        return Entertainment;
}
