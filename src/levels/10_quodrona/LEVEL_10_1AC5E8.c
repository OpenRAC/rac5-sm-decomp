/* LEVEL_10:0x1AC5E8 -- placement copy of LEVEL_04_195C50.c: turns the offset stored in the object's table into a pointer when its target is valid; returns 1 on success, else clears it and returns 0. */
extern int D_0020F9F4;
typedef struct Obj { char pad0[0x54]; int *table; } Obj;

int func_1AC5E8(Obj *o)
{
    int *p = o->table;
    int v = p[0];
    int t;
    if (v == 0)
        return 0;
    t = D_0020F9F4 + v;
    if (*(int *)(t + 0x40) != 0) {
        p[0] = t;
        return 1;
    }
    p[0] = 0;
    return 0;
}
