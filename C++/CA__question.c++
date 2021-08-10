/*There is a secret organization and they want to create 
a secret language for the calculation to make the data
 secure. Now the manager of the organization asked his
  IT employee to make the program which will

function as follows:

a) + will subtract the numbers

b) - will divide the numbers

c) * will add the numbers

d) / will multiply the numbers*/


#include <iostream>
using namespace std;

class Num {
private:
    double value;

public:
    Num(double value);
    Num();
    ~Num();

    double getValue() const;
    Num operator+(const Num& other) const;
    Num operator-(const Num& other) const;
    Num operator*(const Num& other) const;
    Num operator/(const Num& other) const;
};

std::ostream& operator<<(std::ostream& out, const Num& number);


Num::Num(double value) {
    this->value = value;
}

Num::Num() {
    this->value = 0;
}

Num::~Num() {}

double Num::getValue() const {
    return this->value;
}

Num Num::operator+(const Num& other) const {
    Num diff;

    diff.value = this->value - other.getValue();

    return diff;
}

Num Num::operator-(const Num& other) const {
    Num div;

    div.value = this->value / other.getValue();

    return div;
}

Num Num::operator*(const Num& other) const {
    Num sum;

    sum.value = this->value + other.getValue();

    return sum;
}

Num Num::operator/(const Num& other) const {
    Num prod;

    prod.value = this->value * other.getValue();

    return prod;
}

std::ostream& operator<<(std::ostream& out, const Num& other) {
    return out << other.getValue();
}

int main() {
    Num nine(9);
    Num six(6);

    cout << nine + six << endl;
    cout << nine - six << endl;
    cout << nine * six << endl;
    cout << nine / six << endl;

    return 0;
}