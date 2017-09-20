class Record
{public://it is easier to access these directly than to write accessor functions to them
	Record(string);
	vector<string> vector_of_indices;  //storing index names
	vector<Record*> vector_of_index_pointers; //for building the tree
	vector<Record*> linkforward; //for storing selections
    Record* linkback; //for tracing selections back, may not be necessary
	string name;
};

Record::Record(string n)
{name = n;
linkback = this; //to avoid certain problems
}
