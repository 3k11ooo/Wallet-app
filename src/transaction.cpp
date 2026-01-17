//
// Created by MikihitoOtani on 2026/01/17.
//

#include "wallet/transaction.hpp"

namespace wallet {
    // カテゴリを日本語の文字列に変換する関数
    std::string to_string(const wallet::Category cat) {
        switch (cat) {
            case wallet::Category::Food: return "食費";
            case wallet::Category::Transport: return "交通費";
            case wallet::Category::Entertainment: return "娯楽費";
            case wallet::Category::Utilities: return "光熱費";
            case wallet::Category::Housing: return "住居費";
            case wallet::Category::Savings: return "貯蓄";
            case wallet::Category::Sundry: return "雑費";
            case wallet::Category::Income: return "収入";
            default: return "その他";
        }
        return "不明";
    }

    // トランザクションの内容を文字列にする
    std::string to_display_string(const Transaction &tx) {
        return std::format("日付: {:%Y-%m-%d}, 金額: {}円, カテゴリ: {}, メモ: {}",
                           tx.date, tx.amount, to_string(tx.category), tx.memo);
    }
} // namespace wallet
