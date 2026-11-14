/* LEVEL_08:0x202CC8 -- runs the shared step on every object of the chain and then points a global at a static table. */
typedef struct Obj {
    char pad00[0x3C];
    struct Obj *first;
    char pad40[0xD8];
    struct Obj *next;
} Obj;

extern char D_0028AAB0[];
extern char *D_0023F134;
extern void func_20F8C8(Obj *obj);

void func_202CC8(Obj *o)
{
    Obj *p;

    for (p = o->first; p != 0; p = p->next) {
        func_20F8C8(p);
    }
    D_0023F134 = D_0028AAB0;
}
