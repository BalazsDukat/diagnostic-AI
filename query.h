#include "menu.h"

string query(Record* follower)
{int input;
string Case;
menu(follower);
while(cin >> input && input != 0)
{if(0 < input && input <= (follower -> vector_of_index_pointers.size()) )
    {Record* chosen = follower -> vector_of_index_pointers[input - 1];
    follower -> linkforward.push_back(chosen);
    Case += " " + chosen -> name + " ";
    chosen -> linkback = follower;
    
    if(chosen -> vector_of_index_pointers.size() > 0) 
    {follower = chosen;
    Case += " ( ";
    }
    }
else {follower = follower -> linkback;
     Case += " ) ";
     }
menu(follower);
}
return Case;
}
