#include "find.h"

void finder(Record* follower, vector<Rule>& Rules)
{for(int count = 0; count < Rules.size(); count++)
    {istringstream inSs(Rules[count].rule_string);
    string tempS;
    Record* previous = follower;
    vector<Record*> store;
    bool match = true;
    
    while(inSs >> tempS && match == true)
    {if(tempS == "(")
    	{store.push_back(follower);
    	follower = previous;
    	}
    else
    	{if(tempS == ")") 
                  {follower = store[store.size() - 1];
                  store.pop_back();
                  }
    	else
    		{previous = follower;
    		match = find(previous,tempS); 
            }
    	}
    }
Rules[count].truth_value = match;
}
}
