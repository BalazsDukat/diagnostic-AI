void evaluate(vector<Rule>& Rules)
{ifstream inFS("evals.txt");
string tempS;
vector<string> eval;
while(getline(inFS,tempS)) eval.push_back(tempS);
for(int count = 0; count < eval.size(); count++)
if(Rules[count].truth_value == true) cout << endl << eval[count] << endl;
}
