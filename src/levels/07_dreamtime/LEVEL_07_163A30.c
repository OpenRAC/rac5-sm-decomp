/* LEVEL_07:0x163A30 -- placement copy of LEVEL_06_156590.c: runs the helper on the linked record when its flag byte is set. */
typedef struct Link {
    char pad0[0x28];
    unsigned char flag;
} Link;

typedef struct Obj {
    char pad0[0x54];
    Link *link;
} Obj;

extern void func_019C98(Obj *o);

void func_163A30(Obj *o)
{
    Link *l = o->link;

    if (l->flag)
        func_019C98(o);
}
