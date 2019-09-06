//
// Created by jairaj on 06/09/19.
//
#include "blockchain.h"

Blockchain::Blockchain()
{
    chain.emplace_back(Block(0,"Starting Block"));//emplace_back appends into dynamic array
    difficulty=2;//Sets difficulty
}
Block Blockchain::getlastblock() const
{
    return chain.back();//returns last block object
}
void Blockchain::addblock(Block bnew)
{
    bnew.prev_hash=getlastblock().gethash();//Gets the hash of the last block
    bnew.mineblock(difficulty);//mines the block with the function mineblock defined in blockchain.h
    chain.push_back(bnew);//adds the new block at the end
}
