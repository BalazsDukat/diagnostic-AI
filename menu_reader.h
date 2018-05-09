#include "linker.h"

Record* menu_reader() //returns only the root of the tree
{ifstream inFs("menu.txt"); //Simplify this.
string tempS;
vector<Record*> V;
//reader/stores into a vector
while(getline(inFs, tempS))
    {istringstream inSs(tempS);
    if(inSs >> tempS)
        {Record* tempR = new Record(tempS);
        while(inSs >> tempS) tempR -> vector_of_indices.push_back(tempS); 
        //there will be situations when there are no indices to get and it is normal
        V.push_back(tempR);
        }
    else cerr << "I cannot get the name string" << endl; //throwing
    }
//Records made in a lined-up form. Let's link them up:
linker(V);
//they are all linked, return ROOT
return V[0];
}
