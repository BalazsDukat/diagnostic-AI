vector<Rule> rule_reader()
{ifstream inFS("cases.txt");
string tempS;
vector<Rule> V;
//reader/stores into a vector
while(getline(inFS, tempS))
    {Rule tempRule(tempS);
    V.push_back(tempRule);
    }
return V;
}
