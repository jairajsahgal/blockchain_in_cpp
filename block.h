//
// Created by jairaj on 06/09/19.
//

#ifndef TESTCHAIN2_BLOCK_H
#define TESTCHAIN2_BLOCK_H
#include<cstdint>//added for uint_32 typedef.
#include<iostream>
using namespace std;//creates a shortcut to std namespace
/*A blockchain is made up of a series of blocks which contain data and each block contains a
 * cryptographic representation of the previous block, which means that
 * it becomes very hard to change the contents of any block without then needing to change every subsequent one;
 * hence where the blockchain essentially gets its immutable properties.*/
class Block
{
public:
    string prev_hash;//contains previous hash of the block
    Block(uint32_t index,const string &data1);//constructor declaration. const so that none can change it and
    //& so that it can be passed by reference. (saves memory and improve efficiency)
    string gethash();
    void mineblock(uint32_t difficulty);

private:
    uint32_t index1;
    int64_t nance;
    string data;
    string hash;
    time_t time1;

    string calculate_hash() const;
    //const to ensure the method cannot change any of the variables in the block class.

};
#endif //TESTCHAIN2_BLOCK_H
