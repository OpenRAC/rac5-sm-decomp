/* LEVEL_15:0x1384A8 -- turns the offset stored in the object's table into a pointer when its target is valid, else clears it. */
extern int D_0015B714;

typedef struct Tab {
    char pad0[0xC0];
    int off;
} Tab;

typedef struct Obj {
    char pad0[0x54];
    Tab *table;
} Obj;

void func_1384A8(Obj *o)
{
    Tab *p;
    int v;
    int t;

    p = o->table;
    v = p->off;
    if (v != 0) {
        t = D_0015B714 + v;
        if (*(int *)(t + 0x40) == 0)
            p->off = 0;
        else
            p->off = t;
    }
}
