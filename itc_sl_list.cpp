#include "easy_list.h"
int itc_sl_list(const vector <int> &mass)
{
    if(mass.size()!=0)
    {
    int k=0;
    if(mass.size()==1)
    {
        return 0;
    }
    if(mass.size()==0)
    {
        return 0;
    }
    for(int i=1;i<mass.size();i++)
    {
        if(mass[i]>mass[i-1])
        {
            k++;
        }
    }
    return k;
    }
    return 0;
}
