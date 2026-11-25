/* LEVEL_08:0x0FB0F8 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_0AA418(struct Rec0EF6B0 *o, int a);
int func_0F1158(int a);
int func_108548(int a);
int func_105500(int a);
int func_10A298(int a);
void func_0FA968(struct Rec0EF6B0 *o, int *c);

void func_0FB0F8(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_0AA418(o, y);
    o->w_2C = x;
    o->w_1C = func_0F1158(c[0]);
    o->w_20 = func_108548(c[1]);
    o->w_24 = func_105500(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_10A298(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0FA968(o, c);
}
