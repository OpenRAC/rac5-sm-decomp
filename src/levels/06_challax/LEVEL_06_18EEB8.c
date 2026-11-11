/* LEVEL_06:0x18EEB8 -- placement copy of LEVEL_04_195C50.c: turns the offset stored in the object's table into a pointer when its target is valid; returns 1 on success, else clears it and returns 0. */
extern int D_001F5994;
typedef struct Obj { char pad0[0x54]; int *table; } Obj;

int func_18EEB8(Obj *o)
{
    int *p = o->table;
    int v = p[0];
    int t;
    if (v == 0)
        return 0;
    t = D_001F5994 + v;
    if (*(int *)(t + 0x40) != 0) {
        p[0] = t;
        return 1;
    }
    p[0] = 0;
    return 0;
}
