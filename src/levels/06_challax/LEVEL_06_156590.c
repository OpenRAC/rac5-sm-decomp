/* LEVEL_06:0x156590 -- runs the helper on the linked record when its flag byte is set. */
typedef struct Link {
    char pad0[0x28];
    unsigned char flag;
} Link;

typedef struct Obj {
    char pad0[0x54];
    Link *link;
} Obj;

extern void func_017DD8(Obj *o);

void func_156590(Obj *o)
{
    Link *l = o->link;

    if (l->flag)
        func_017DD8(o);
}
