// i know this project is trash i will fix it later
#include <iostream>
#include <iomanip>

void showBalance(double);
double deposit();
double withdraw(double);

int main()
{
    double balance{123};
    int choice{};
    double temp{};

    while (true)
    {
        std::cout << "\n*************************" << std::endl;
        std::cout << "Enter your choice:" << std::endl;
        std::cout << "1 Show Balance" << std::endl;
        std::cout << "2 Deposit Money" << std::endl;
        std::cout << "3 Withdraw Money" << std::endl;
        std::cout << "4 Exit" << std::endl;
        std::cout << "*************************" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;

        case 2:
            temp = deposit();
            balance += temp;
            std::cout << '\n'
                      << "$" << temp << " deposited succesfully.";
            std::cout << "\nYour new balance is $ " << balance << '.' << std::endl;
            break;

        case 3:
            temp = withdraw(balance);
            if (temp == 0)
            {
                std::cout << "\nINSUFFICIENT BALANCE" << std::endl;
            }

            else
            {
                balance -= temp;
                std::cout << '\n'
                          << "$" << temp << " withdrawn succesfully.";
                std::cout << "\nYour new balance is $ " << balance << '.' << std::endl;
            }
            break;

        case 4:
            std::cout << "\nTHANK YOU FOR USING OUR SERVICE.";
            exit(0);

        default:
            std::cout << "\n********************\nERROR\n********************";
            break;
        }
    }
    return 0;
}

void showBalance(double balance)
{
    std::cout << "\nYour Balance is:$ " << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
    double depositAmount{};
    std::cout << "\nEnter the amount to be deposited:$ ";
    std::cin >> depositAmount;

    return depositAmount;
}

double withdraw(double balance)
{
    double withdrawAmount{};
    std::cout << "\nEnter the amount to be withdrawn:$ ";
    std::cin >> withdrawAmount;

    balance -= withdrawAmount;
    if (balance < 0)
    {
        return 0;
    }

    else
    {
        return withdrawAmount;
    }
}