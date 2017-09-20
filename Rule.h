//A rule will need to contain a logical path.
//brackets "( )" could be used in the rule file!!!!!
//e.g.: axle ( impact_marks ( deeper_than_2mm ) )
class Rule
{public:
	Rule(string);
	string rule_string;
	int truth_value;
};

Rule::Rule(string n)
{rule_string = n;
truth_value = 0;
}
