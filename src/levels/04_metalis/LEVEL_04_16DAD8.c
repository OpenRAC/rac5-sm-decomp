/* LEVEL_04:0x16DAD8 -- enters state 2: runs the entry helper, starts the linked record's effect, refreshes the object and returns 3. */
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

extern void func_1691D8(Obj *o, int a, int b);
extern void func_1707C0(void *effect);
extern void func_1DE4B0(Obj *o);
extern void func_07FAE8(Obj *o, int a);

int func_16DAD8(Obj *o)
{
    func_1691D8(o, 2, 0);
    o->b45 = 2;
    func_1707C0(o->link->effect);
    func_1DE4B0(o);
    func_07FAE8(o, 1);
    return 3;
}
