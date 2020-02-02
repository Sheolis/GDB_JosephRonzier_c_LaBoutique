#include "game.h"

void add_to_shop(item_s *item, shop_s *shop)
{
  shop->item_list = realloc(shop->item_list, (shop->size + 1) * sizeof(item_s *));
  shop->item_list[shop->size] = item;
  shop->size++;
}

void add_to_bag(item_s *item, bag_s *bag)
{
  bag->item_list = realloc(bag->item_list, (bag->size + 1) * sizeof(item_s *));
  bag->item_list[bag->size] = item;
  bag->size++;
}

void tri_shop(shop_s *shop)
{
    int v=0;
    while(v<shop->size)
    {
        int i=v;
        for (int j=0; j<shop->size; j++)
        {
            if (strcmp(shop->item_list[i]->name,shop->item_list[j]->name)<0)
            {
                swap(shop->item_list,i,j);
                j=i;
            }
        }
        v ++;
    }
}

void print_shop(shop_s *shop)
{
    printf(">>>> %s <<<<\n", shop->name);
    for (int i=0; i< shop->size; i++)
    {
        printf("[%d] %s | price : %d coins | qty: %d\n",i, shop->item_list[i]->name, shop->item_list[i]->price, shop->item_list[i]->quantity);
    }
}

void print_bag(bag_s *bag)
{
    printf("-------------------\n");
    for (int i=0; i< bag->size; i++)
    {
        printf("%s | qty: %d\n",i, bag->item_list[i]->name, bag->item_list[i]->quantity);
    }
    printf("Coins : %d\n",bag->money);
}

void buy_item(bag_s *bag, shop_s *shop)
{

    int buy;
    printf("Choose an item to buy :\n");
    scanf("%d",&buy);
    shop->item_list[buy]->quantity-=1;
    bag->money -= shop->item_list[buy]->price;
    add_to_bag(shop->item_list[buy], bag);

}
