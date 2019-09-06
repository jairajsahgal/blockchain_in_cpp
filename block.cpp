//
// Created by jairaj on 06/09/19.
//
#include "block.h"
#include "sha256.h"
#include<sstream>
Block::Block(uint32_t index, const string &data1):index1(index),data(data1)
{
    nance=-1;
    time1=time(nullptr);
}
string Block::gethash()
{
    return hash;
}
//Mining Block
//A miner must create a cryptographic hash of the block they want to add to the blockchain
//that matches the requirements for a valid hash at that time.
//Achieved by counting the no. of zeroes at the beginning of the hash
//if the no. of zeroes is equal or greater than the difficulty level set
//by the network that block is valid.
//if nance is incremented then hash is created again.
//This is called Proof of Work, is repeated until a hash is produced that is valid.

void Block::mineblock(uint32_t difficulty) //specified in the block.h
{
    uint32_t temp=0;//how many times block has been mined.
    char cstr[difficulty +1];//string for hash
    bool judge;
    for(uint32_t i=0;i<difficulty;++i)
    {
        cstr[i]='0';
    }
    cstr[difficulty]='\0';//adding \0 to the
    string str(cstr);
    do
    {
        cout<<"Trial version "<<temp;
        nance++;
        cout<<"nonce is "<<nance;//I SERIOUSLY DON'T KNOW WHAT WILL BE THE OUTPUT
        hash=calculate_hash();//hash that will be tested.
        cout<<(hash);
        bool judge=(hash.substr(0,difficulty)!=str);//condition for proof of work explained above
        if(judge== true)
        {
            cout<<"\nHash was successful and hash was "<<hash;
            cout<<"\nString that needed to pass the test "<<str;
            cout<<"\nSuccessful after this many times: "<<temp;
        }
        else if(judge==false)
        {
            cout<<"Hash that failed "<<hash;
            cout<<"Tried this many times till "<<temp;
        }
    }while(judge);
    cout<<"Block Mined: "<<hash<<endl;
}
inline string Block::calculate_hash() const
{
    std::stringstream ss;
    ss << index1 << time1 << data << nance << prev_hash;//number of things that got changed into sha256 hash index of hash,time of hash, data , nonce and prev hash
    return sha256(ss.str());
}
