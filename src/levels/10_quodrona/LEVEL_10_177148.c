/* LEVEL_10:0x177148 -- copies a 28-byte block from a global into the object, runs the setup call with a zero and a small float, then the object's finish step. */
struct Blk {
    int w[7];
};

struct Obj {
    char pad00[0xA4];
    struct Blk f_A4;
};

extern struct Blk D_0022A4C8;

extern void func_1730A0(struct Obj *o, int n, float a, float b);
extern void func_173850(struct Obj *o);

void func_177148(void *unused, struct Obj *o)
{
    o->f_A4 = D_0022A4C8;
    func_1730A0(o, 1, 0.0f, 0.15f);
    func_173850(o);
}
