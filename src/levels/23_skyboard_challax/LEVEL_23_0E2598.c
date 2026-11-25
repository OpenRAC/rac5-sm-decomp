/* LEVEL_23:0x0E2598 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_096860(struct Rec0EF6B0 *o, int a);
int func_0DA9A0(int a);
int func_0EF9E8(int a);
int func_0EC9A0(int a);
int func_0F1738(int a);
void func_0E1E08(struct Rec0EF6B0 *o, int *c);

void func_0E2598(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_096860(o, y);
    o->w_2C = x;
    o->w_1C = func_0DA9A0(c[0]);
    o->w_20 = func_0EF9E8(c[1]);
    o->w_24 = func_0EC9A0(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0F1738(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0E1E08(o, c);
}
