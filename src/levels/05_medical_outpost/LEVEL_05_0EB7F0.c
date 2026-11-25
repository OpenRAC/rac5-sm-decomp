/* LEVEL_05:0x0EB7F0 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_09E0D0(struct Rec0EF6B0 *o, int a);
int func_0E3BF8(int a);
int func_0F8C40(int a);
int func_0F5BF8(int a);
int func_0FA990(int a);
void func_0EB060(struct Rec0EF6B0 *o, int *c);

void func_0EB7F0(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_09E0D0(o, y);
    o->w_2C = x;
    o->w_1C = func_0E3BF8(c[0]);
    o->w_20 = func_0F8C40(c[1]);
    o->w_24 = func_0F5BF8(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0FA990(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0EB060(o, c);
}
