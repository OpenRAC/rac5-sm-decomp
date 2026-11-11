/* LEVEL_21:0x139DC8 -- placement copy of LEVEL_04_1C8358.c: turns the second offset stored in the object's table into a pointer when its target is valid, else clears it. */
extern int D_0015B714;

typedef struct Obj {
    char pad0[0x54];
    int *table;
} Obj;

void func_139DC8(Obj *o)
{
    int *p;
    int v;
    int t;

    p = o->table;
    v = p[1];
    if (v != 0) {
        t = D_0015B714 + v;
        if (*(int *)(t + 0x40) == 0)
            p[1] = 0;
        else
            p[1] = t;
    }
}
