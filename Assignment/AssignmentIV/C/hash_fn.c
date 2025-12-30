/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {
    // TODO: replace with your own design

    //Multiplicative Hash
    const double A = 0.618033;
    double h = key * A - (int)(key * A);

    return (int)(m * h);
}

int myHashString(const char* str, int m) {
    unsigned long hash = 0;
    // TODO: replace with your own design
    
    //FNV-1a
    long long int FNV_offset_basis = 2166136261;
    long long int FNV_PRIME = 16777619;
    hash = FNV_offset_basis;
    for(int i = 0;str[i] != '\0';i++){
        hash ^= (unsigned char)str[i];
        hash = hash * FNV_PRIME;
    }

    return (int)(hash % m);  // basic division method
