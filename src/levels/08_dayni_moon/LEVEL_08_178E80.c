/* LEVEL_08:0x178E80 -- placement copy of LEVEL_04_16DAD8.c: enters state 2: runs the entry helper, starts the linked record's effect, refreshes the object and returns 3. */
typedef struct Link {
    char pad_00[0x18];
    void *effect;
} Link;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[0x12];
    Link *link;
} Obj;

extern void func_170FF0(Obj *o, int a, int b);
extern void func_17BB68(void *effect);
extern void func_205670(Obj *o);
extern void func_0845F8(Obj *o, int a);

int func_178E80(Obj *o)
{
    func_170FF0(o, 2, 0);
    o->b45 = 2;
    func_17BB68(o->link->effect);
    func_205670(o);
    func_0845F8(o, 1);
    return 3;
}
