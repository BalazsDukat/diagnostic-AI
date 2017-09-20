void menu(Record*& follower)//menu builder, part of query
{cout << "Please enter a number between 0 and " << follower -> vector_of_indices.size() 
<< ".\nAny value out of range will switch to previous menu.\n\n";
cout << setw(2) << 0 << "  start reasoning\n";
for(int count = 0; count < follower -> vector_of_indices.size(); count++)
        {cout << setw(2) << count + 1 << "  "
        << follower -> vector_of_indices[count] << endl;
}       }
