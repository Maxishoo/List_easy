#include "easy_list.h"
void itc_rev_list(vector <int> &mass)
{
    if(mass.size()!=0 && mass.size()!=1)
    {
    int swappi;
   for(int i=0;i<mass.size()/2;i++)
   {
       swappi=mass[i];
       mass[i]=mass[mass.size()-i-1];
       mass[mass.size()-i-1]=swappi;
   }
    }
}
void itc_rev_par_list(vector <int> &mass)
{
   if(mass.size()!=0)
   {
   int swappi;
   for(int i=0;i<mass.size()-1;i=i+2)
   {
       swappi=mass[i];
       mass[i]=mass[i+1];
       mass[i+1]=swappi;
   }
   }
}
