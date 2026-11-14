/* LEVEL_04:0x1C6A80 -- turns the third offset stored in the object's table into a pointer when its target is valid, else clears it. */
extern int D_002201B4;

typedef struct Obj {
    char pad0[0x54];
    int *table;
} Obj;

void func_1C6A80(Obj *o)
{
    int *p;
    int v;
    int t;

    p = o->table;
    v = p[2];
    if (v != 0) {
        t = D_002201B4 + v;
        if (*(int *)(t + 0x40) == 0)
            p[2] = 0;
        else
            p[2] = t;
    }
}
