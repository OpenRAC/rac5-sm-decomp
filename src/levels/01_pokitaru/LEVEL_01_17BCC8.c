/* LEVEL_01:0x17BCC8 -- sets a state byte to 3 when it is 1 or 2, then calls a helper with a float pair. */

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
};

void func_07CD28(struct Obj *o, int a1, int a2, int a3, float f12, float f13);

void func_17BCC8(struct Obj *o)
{
    if (o->b_45 - 1U < 2U) {
        o->b_45 = 3;
        func_07CD28(o, 3, 0, 1, 0.15f, 0.0f);
    }
}
