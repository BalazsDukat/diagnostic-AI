/*3 cycles: 1st picks the Record who's indices will be matched to names.
//2nd goes through it's indices.
//3rd goes through the main vector of Records examining the names.*/
void linker(vector<Record*> V)
{//linker/links up the elements of the vector according to their indices
bool match;
for(int count1 = 0; count1 < V.size(); count1++)
    {    for(int count2 = 0; count2 < V[count1] -> vector_of_indices.size(); count2++) 
         {match = false;
         for(int count3 = 0; count3 < V.size() && (match != true); count3++)
             {if(V[count1] -> vector_of_indices[count2] == V[count3] -> name)
                 {V[count1] -> vector_of_index_pointers.push_back(V[count3]);
                 match = true;
                 }   
}   }    }       }
