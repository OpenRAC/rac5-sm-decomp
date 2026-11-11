/* LEVEL_04:0x1C8358 -- turns the second offset stored in the object's table into a pointer when its target is valid, else clears it. */
extern int D_002201B4;

typedef struct Obj {
    char pad0[0x54];
    int *table;
} Obj;

void func_1C8358(Obj *o)
{
    int *p;
    int v;
    int t;

    p = o->table;
    v = p[1];
    if (v != 0) {
        t = D_002201B4 + v;
        if (*(int *)(t + 0x40) == 0)
            p[1] = 0;
        else
            p[1] = t;
    }
}
