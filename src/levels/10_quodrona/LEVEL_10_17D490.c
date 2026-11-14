/* LEVEL_10:0x17D490 -- placement copy of LEVEL_03_17AED8.c: turns the first offset stored in the object's table into a pointer when its target is valid, else clears it. */
extern int D_0020F9F4;

typedef struct Obj {
    char pad0[0x54];
    int *table;
} Obj;

void func_17D490(Obj *o)
{
    int *p;
    int v;
    int t;

    p = o->table;
    v = p[0];
    if (v != 0) {
        t = D_0020F9F4 + v;
        if (*(int *)(t + 0x40) == 0)
            p[0] = 0;
        else
            p[0] = t;
    }
}
