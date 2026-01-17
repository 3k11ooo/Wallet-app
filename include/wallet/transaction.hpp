//
// Created by MikihitoOtani on 2026/01/17.
//

#pragma once

#include <string>
#include <chrono>
#include <cstdint>

namespace wallet {

    // 収支の種類を区別するための列挙型
    enum class Category {
        Food, // 食費
        Transport, // 交通費
        Entertainment, // 娯楽費
        Utilities, // 光熱費
        Housing, // 住居費
        Savings, // 貯蓄
        Sundry, // 雑費
        Income, // 収入
        Others // その他
    };

    // データモデル自体はシンプルな struct で定義するのが一般的です
    struct Transaction {
        uint64_t id; // 一意の識別子
        std::chrono::sys_days date; // 日付
        long long amount; // 金額(円)
        Category category; // 収支の種類
        std::string memo; // メモ

        Transaction(uint64_t id, std::chrono::sys_days date, long long amount,
                    Category category, std::string memo)
            : id(id), date(date), amount(amount), category(category), memo(std::move(memo)) {}
    };

    // --- 関数の宣言 ---
    std::string to_display_string(const Transaction& tx);

} // namespace wallet
