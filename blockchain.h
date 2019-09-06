//
// Created by jairaj on 06/09/19.
//

#ifndef TESTCHAIN2_BLOCKCHAIN_H
#define TESTCHAIN2_BLOCKCHAIN_H
#include<cstdint>
#include<vector>
#include "block.h"
class Blockchain
{
public:
    Blockchain();
    void addblock(Block bnew);//declaration of function to add new block with the object of Block class
    
private:
    uint32_t difficulty;
    vector<Block> chain;//chain is a Block object
    Block getlastblock() const;//const so that output cannot be changed
};
#endif //TESTCHAIN2_BLOCKCHAIN_H
