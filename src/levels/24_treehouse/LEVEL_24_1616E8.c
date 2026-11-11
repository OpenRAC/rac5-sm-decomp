/* LEVEL_24:0x1616E8 -- placement copy of LEVEL_01_17BCC8.c: sets a state byte to 3 when it is 1 or 2, then calls a helper with a float pair. */

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
};

void func_077408(struct Obj *o, int a1, int a2, int a3, float f12, float f13);

void func_1616E8(struct Obj *o)
{
    if (o->b_45 - 1U < 2U) {
        o->b_45 = 3;
        func_077408(o, 3, 0, 1, 0.15f, 0.0f);
    }
}
