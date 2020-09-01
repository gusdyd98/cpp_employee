// employee.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "employee.h"

using namespace std;

namespace Records {
    Employee::Employee(const std::string& firstName,
        const std::string& lastName)
        : mFirstName(firstName), mLastName(lastName)
    {

    }

    void Employee::promote(int raiseAmount)
    {
        setSalary(getSalary() + raiseAmount);
    }

    void Employee::demote(int demeritAmount)
    {
        setSalary(getSalary() + demeritAmount);
    }

    void Employee::hire()
    {
        mHired = true;
    }

    void Employee::fire()
    {
        mHired = false;
    }

    void Employee::display() const
    {
        std::cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
        std::cout << "-------------------------" << endl;
        std::cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
        std::cout << "Employee Number: " << getEmployeeNumber() << endl;
        std::cout << "Salary: $" << getSalary() << endl;
        std::cout << endl;
    }

    void Employee::setFirstName(const string& firstName)
    {
        mFirstName = firstName;
    }

    const string& Employee::getFirstName() const
    {
        return mFirstName;
    }

    void Employee::setLastName(const std::string& lastName)
    {
        mLastName = lastName;
    }

    const std::string& Employee::getLastName() const
    {
        return mLastName;
    }


    void Employee::setEmployeeNumber(int employeeNumber)
    {
        mEmployeeNumber = employeeNumber;
    }

    int Employee::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }

    void Employee::setSalary(int newSalary)
    {
        mSalary = newSalary;
    }

    int Employee::getSalary() const
    {
        return mSalary;
    }

    bool Employee::isHired() const
    {
        return mHired;
    }


}
