#include "blockchain.h"
int main() {
    Blockchain block_chain=Blockchain();
    //block_chain.set_difficulty();
    cout<<"Mining our 1st block..."<<endl;
    block_chain.addblock(Block(1,"Jairaj"));//data given as Jairaj

    cout<<"Mining our 2nd block..."<<endl;
    block_chain.addblock(Block(2,"Nishtha"));//data given as Nishtha

    cout<<"Mining our 3rd block..."<<endl;
    block_chain.addblock(Block(3,"Prasoon"));//data given as Prasoon

    cout<<"Mining our 4th block..."<<endl;
    block_chain.addblock(Block(4,"Prachi"));//data given as Prachi
    return 0;
}