bool find(Record*& follower, const string& tempS)
{bool match = false;
Record* previous = follower;
for(int count = 0; count < follower -> linkforward.size() && match != true; count++)
     {if(follower -> linkforward[count] -> name == tempS) match = true;
     else
         {previous = follower;
          follower = follower -> linkforward[count];
          match = find(follower, tempS);
          follower = previous;
         }
     }
return match;
}
