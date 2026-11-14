/* LEVEL_02:0x1678B0 -- turns the offset stored in the object's table into a pointer when its target is valid; returns 1 on success, else clears it and returns 0. */
extern int D_0021BD54;
typedef struct Obj { char pad0[0x54]; int *table; } Obj;

int func_1678B0(Obj *o)
{
    int *p = o->table;
    int v = p[48];
    int t;
    if (v == 0)
        return 0;
    t = D_0021BD54 + v;
    if (*(int *)(t + 0x40) != 0) {
        p[48] = t;
        return 1;
    }
    p[48] = 0;
    return 0;
}
