#include <iostream>
#include <string>

int main()
{
    std::cout << "1. Gross profit margin " << std::endl;
    std::cout << "2. Net profit margin" << std::endl;
    std::cout << "Option 1 or 2: ";
    int choice;
    std::cin >> choice;
    double net_profit, cost_of_goods, net_sales;
    int margin;
    if (choice == 1)
    {
        std::cout << "\nRevenue: ";
        std::cin >> net_sales;
        std::cout << "Cost of goods sold: ";
        std::cin >> cost_of_goods;
        margin = (net_sales - cost_of_goods) * 100 / net_sales;
        std::cout << "-------------------------" << std::endl;
        std::cout << "Gross profit margin: " << margin << "%\n";
        std::cout << "-------------------------" << std::endl;
    }
}