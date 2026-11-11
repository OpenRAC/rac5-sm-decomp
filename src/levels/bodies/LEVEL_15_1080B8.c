/* LEVEL_15:0x1080B8 -- placement copy of LEVEL_15_104AE8.c: updates the object's eight sub records. */
typedef struct {
    char data[0x30];
} Item;

typedef struct {
    char pad[0x278];
    Item items[8];
} Obj;

extern void func_0FE8B8(Item *);

void func_1080B8(Obj *obj)
{
    int i;

    for (i = 0; i < 8; i++)
        func_0FE8B8(&obj->items[i]);
}
