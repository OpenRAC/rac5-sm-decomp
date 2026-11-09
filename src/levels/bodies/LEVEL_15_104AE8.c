/* LEVEL_15:0x104AE8 -- updates the object's eight sub records. */
typedef struct {
    char data[0x30];
} Item;

typedef struct {
    char pad[0x278];
    Item items[8];
} Obj;

extern void func_0FE808(Item *);

void func_104AE8(Obj *obj)
{
    int i;

    for (i = 0; i < 8; i++)
        func_0FE808(&obj->items[i]);
}
