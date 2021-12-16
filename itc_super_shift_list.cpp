#include "easy_list.h"
void itc_even_index_list(const vector <int> &mass, vector <int> &mass2)
{
    if(mass.size()!=0 || mass2.size()!=0)
    {
    for(int i=0;i<mass.size();i++)
    {
        if(i%2==0 || i==0)
        {
            mass2.push_back(mass[i]);
        }
    }
    }
}
void itc_rshift_list(vector <int> &mass)
{
   int swappi;
   int last=mass[mass.size()-1];
   int l=mass.size();
   if(l!=0 && l!=1)
   {
   for(int i=0;i<mass.size()-1;i++)
   {
       swappi=mass[l-i-1];
       mass[l-i-1]=mass[l-i-2];

   }
   mass[0]=last;
   }
}
void itc_rshift_list_back_n(vector <int> &mass)
{
   int swappi;
   int first=mass[0];
   int l=mass.size();
   if(l!=0 && l!=1)
   {
   for(int i=0;i<mass.size()-1;i++)
   {
       //swappi=mass[l-i-1];
       mass[i]=mass[i+1];

   }
   mass[l-1]=first;
   }
}
void itc_super_shift_list(vector <int> &mass, int k)
{
    int l=mass.size();
    if(k!=0 && k!=-0 &&k!=+0 && l!=0 && l!=1)
    {
        if(k>0)
        {
            for(int i=0;i<k;i++)
            {
                itc_rshift_list(mass);
            }
        }else if(k<0)
        {
            for(int i=0;i<k*(-1);i++)
            {
                itc_rshift_list_back_n(mass);
            }
        }
    }
}
