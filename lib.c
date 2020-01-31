#include "game.h"

int index_research(item_s **item_list, int size, char *item_name)
{
    for (int i = 0 ; i<size ; i++ )
    {
        if (item_list[i]->name==item_name)
        {
            return i;
        }
    }
    return -1;
}

void swap(item_s **item_list, int i, int j)
{
  item_s *tmp = item_list[i];
  item_list[i]=item_list[j];
  item_list[j]=tmp;
}
