#ifndef __GAME_H_
#define __GAME_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef enum availability availability_e;
typedef struct shop shop_s;
typedef struct item item_s;
typedef struct bag bag_s;

void tri_shop(shop_s *shop);
int index_research(item_s **item_list, int size, char *item_name);
void print_shop(shop_s *shop);
void print_bag(bag_s *bag);
void buy(shop_s *shop, bag_s *bag);
void get_item(item_s *item);
void add_to_shop(item_s *item, shop_s *shop);
void swap(item_s **item_list, int i, int j);
void print_shop(shop_s *shop);

enum availability { NOT_AFFORDABLE=0, AFFORDABLE=1};

//

struct shop
{
    char *name;
    int size;
    item_s **item_list;
};

struct item
{
    int quantity;
    char* name;
    int price;
};

struct bag
{
    item_s **item_list;
    int money;
};

#endif
