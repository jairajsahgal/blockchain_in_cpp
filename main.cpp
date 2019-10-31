#include "blockchain.h"
int main() {
    Blockchain block_chain=Blockchain();
    
    char choice;
    int i=1;
    string data;
    do
    {
        cout<<"Enter data for "<<i<<"th Block";
        cin>>data;
        cout<<"Mining "<<i<<"th "<<"Block"<<endl;
        cout<<"With data= "<<data;
        block_chain.addblock(Block(i,data));
        cout<<"Do you want to add more blocks?";

        cin>>choice;
    }while(choice=='y');


    return 0;
}