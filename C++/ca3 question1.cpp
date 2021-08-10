#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Marks
{
public:
    Marks(int roll_number, const string &name, const std::vector<int> &marks)
        : roll_number(roll_number), name(name), marks(marks)
    {
    }

    double average()
    {
        return static_cast<double>(totalMarks()) / marks.size();
    }
    int totalMarks()
    {
        int sum = 0;
        return std::accumulate(marks.begin(), marks.end(), sum);
    }

private:
    int roll_number;
    string name;
    std::vector<int> marks;
};

class Physics : public Marks
{
public:
    Physics(int roll_number, const string &name, const std::vector<int> &marks)
        : Marks(roll_number, name, marks)
    {
    }
};

class Chemistry : public Marks
{
public:
    Chemistry(int roll_number, const string &name, const std::vector<int> &marks)
        : Marks(roll_number, name, marks)
    {
    }
};

class Mathematics : public Marks
{
public:
    Mathematics(int roll_number, const string &name, const std::vector<int> &marks)
        : Marks(roll_number, name, marks)
    {
    }
};