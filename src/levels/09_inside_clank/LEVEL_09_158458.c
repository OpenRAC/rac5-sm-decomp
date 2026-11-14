/* LEVEL_09:0x158458 -- placement copy of LEVEL_06_156590.c: runs the helper on the linked record when its flag byte is set. */
typedef struct Link {
    char pad0[0x28];
    unsigned char flag;
} Link;

typedef struct Obj {
    char pad0[0x54];
    Link *link;
} Obj;

extern void func_018998(Obj *o);

void func_158458(Obj *o)
{
    Link *l = o->link;

    if (l->flag)
        func_018998(o);
}
