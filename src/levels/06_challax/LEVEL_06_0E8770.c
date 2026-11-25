/* LEVEL_06:0x0E8770 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_09A2F0(struct Rec0EF6B0 *o, int a);
int func_0E0A88(int a);
int func_0F5BC0(int a);
int func_0F2B78(int a);
int func_0F7910(int a);
void func_0E7FE0(struct Rec0EF6B0 *o, int *c);

void func_0E8770(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_09A2F0(o, y);
    o->w_2C = x;
    o->w_1C = func_0E0A88(c[0]);
    o->w_20 = func_0F5BC0(c[1]);
    o->w_24 = func_0F2B78(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0F7910(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0E7FE0(o, c);
}
