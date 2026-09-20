#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <memory>

class Employee {
protected:
    int employeeId;
    std::string name;

public:
    Employee(int id, std::string employeeName)
        : employeeId(id), name(std::move(employeeName)) {}

    virtual double calculateSalary() const = 0;

    void displayBasicDetails() const {
        std::cout << "Employee ID: " << employeeId << '\n';
        std::cout << "Name: " << name << '\n';
    }

    virtual ~Employee() = default;
};

// Permanent Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double allowance;
    double tax;

public:
    PermanentEmployee(int id, std::string employeeName,
                      double basic, double extra, double taxAmount)
        : Employee(id, std::move(employeeName)),
          basicSalary(basic), allowance(extra), tax(taxAmount) {}

    // Salary after deducting tax
    double calculateSalary() const override {
        return basicSalary + allowance - tax;
    }
};

// Contract Employee
class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(int id, std::string employeeName,
                     double rate, int hours)
        : Employee(id, std::move(employeeName)),
          hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }
};

// Modification 1: Freelance Employee
class FreelanceEmployee : public Employee {
private:
    double projectFee;

public:
    FreelanceEmployee(int id, std::string employeeName, double fee)
        : Employee(id, std::move(employeeName)),
          projectFee(fee) {}

    double calculateSalary() const override {
        return projectFee;
    }
};

// Display employee payslip
void printPaySlip(const Employee& employee) {
    employee.displayBasicDetails();
    std::cout << "Salary: Rs. "
              << employee.calculateSalary() << "\n\n";
}

int main() {

    // Modification 3: Store employees using vector of unique_ptr
    std::vector<std::unique_ptr<Employee>> employees;

    // Modification 2: Tax added to permanent employee
    employees.push_back(
        std::make_unique<PermanentEmployee>(
            101, "Asha", 40000.0, 8000.0, 5000.0
        )
    );

    employees.push_back(
        std::make_unique<ContractEmployee>(
            102, "Vikas", 500.0, 80
        )
    );

    // Modification 1: Add Freelance Employee
    employees.push_back(
        std::make_unique<FreelanceEmployee>(
            103, "Riya", 25000.0
        )
    );

    // Display payslips and calculate total payroll
    double totalPayroll = 0.0;

    for (const auto& employee : employees) {
        printPaySlip(*employee);
        totalPayroll += employee->calculateSalary();
    }

    // Modification 4: Display total payroll
    std::cout << "Total Payroll Amount: Rs. "
              << totalPayroll << '\n';

    return 0;
}
