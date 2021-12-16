#include "easy_list.h"
void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2)
{
    if(mass.size()!=0 || mass2.size()!=0)
    {
    for(int i=0;i<mass.size();i++)
    {
        if(mass[i]%2==0)
        {
            mass2.push_back(mass[i]);
        }
    }
    }
}
bool itc_same_parts_list(const vector <int> &mass)
{
    bool otv=false;

    if(mass.size()==1 || mass.size()==0)
        return false;

    for(int i=0;i<mass.size()-1;i++)
    {
            if(  (mass[i]>0 && mass[i+1]>0) ||  (mass[i]<0 && mass[i+1]<0) || (mass[i]==0 && mass[i+1]==0)  )
                return true;
    }

    return otv;
}
