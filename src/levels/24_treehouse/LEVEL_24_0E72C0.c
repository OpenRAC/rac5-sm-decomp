/* LEVEL_24:0x0E72C0 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_099398(struct Rec0EF6B0 *o, int a);
int func_0DD4D8(int a);
int func_0F4710(int a);
int func_0F16C8(int a);
int func_0F6460(int a);
void func_0E6B30(struct Rec0EF6B0 *o, int *c);

void func_0E72C0(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_099398(o, y);
    o->w_2C = x;
    o->w_1C = func_0DD4D8(c[0]);
    o->w_20 = func_0F4710(c[1]);
    o->w_24 = func_0F16C8(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0F6460(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0E6B30(o, c);
}
