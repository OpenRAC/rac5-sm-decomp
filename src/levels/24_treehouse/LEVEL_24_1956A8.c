/* LEVEL_24:0x1956A8 -- placement copy of LEVEL_04_1C6A80.c: turns the third offset stored in the object's table into a pointer when its target is valid, else clears it. */
extern int D_001D7A14;

typedef struct Obj {
    char pad0[0x54];
    int *table;
} Obj;

void func_1956A8(Obj *o)
{
    int *p;
    int v;
    int t;

    p = o->table;
    v = p[2];
    if (v != 0) {
        t = D_001D7A14 + v;
        if (*(int *)(t + 0x40) == 0)
            p[2] = 0;
        else
            p[2] = t;
    }
}
