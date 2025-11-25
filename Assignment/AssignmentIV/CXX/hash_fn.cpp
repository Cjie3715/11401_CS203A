/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */
#include "hash_fn.hpp"

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    //Multiplicative Hash
    const double A = 0.618033;
    double h = key * A - static_cast<int>(key * A);

    return static_cast<int>(m*h);  // basic division method
}

int myHashString(const std::string& str, int m) {
    unsigned long hash = 0;
    // TODO: replace with your own design
    
    //FNV-1a
    long long int FNV_offset_basis = 2166136261;
    long long int FNV_PRIME = 16777619;
    hash = FNV_offset_basis;
    for(int i = 0;i < str.length();i++){
        hash ^= static_cast<unsigned char>(str[i]);
        hash = hash * FNV_PRIME;
    }

    return static_cast<int>(hash % m);  // basic division method
}
