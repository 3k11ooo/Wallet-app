//
// Created by MikihitoOtani on 2026/01/17.
//

#include <chrono>
#include <iostream>

#include "wallet/transaction.hpp"

int main() {
    using namespace std::chrono_literals;
    const wallet::Transaction tx(1, std::chrono::sys_days{2026y / 1 / 17}, 1200,
                           wallet::Category::Food, "五反田でランチ");

    std::cout << "Transaction Details:\n";
    std::cout << wallet::to_display_string(tx) << std::endl;

    return 0;
}
