#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

#include "Record.h"
#include "Rule.h"
#include "menu_reader.h"
#include "query.h"
#include "case_reader.h"
#include "finder.h"
#include "evaluate.h"

int main()
{Record* ROOT = menu_reader();
cout << query(ROOT);
vector<Rule> Rules = rule_reader();
finder(ROOT,Rules);
evaluate(Rules);

for(int count = 0; count < Rules.size(); count++)
cout << endl << Rules[count].rule_string << " " << Rules[count].truth_value;

int stopper;
cin >> stopper;
}
