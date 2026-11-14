/* LEVEL_09:0x16EA98 -- placement copy of LEVEL_03_17AED8.c: turns the first offset stored in the object's table into a pointer when its target is valid, else clears it. */
extern int D_001F0894;

typedef struct Obj {
    char pad0[0x54];
    int *table;
} Obj;

void func_16EA98(Obj *o)
{
    int *p;
    int v;
    int t;

    p = o->table;
    v = p[0];
    if (v != 0) {
        t = D_001F0894 + v;
        if (*(int *)(t + 0x40) == 0)
            p[0] = 0;
        else
            p[0] = t;
    }
}
