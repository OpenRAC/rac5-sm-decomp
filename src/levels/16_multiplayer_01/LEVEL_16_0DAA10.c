/* LEVEL_16:0x0DAA10 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_08EE00(struct Rec0EF6B0 *o, int a);
int func_0D5828(int a);
int func_0E5C10(int a);
int func_0E4318(int a);
int func_0E7290(int a);
void func_0DA280(struct Rec0EF6B0 *o, int *c);

void func_0DAA10(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_08EE00(o, y);
    o->w_2C = x;
    o->w_1C = func_0D5828(c[0]);
    o->w_20 = func_0E5C10(c[1]);
    o->w_24 = func_0E4318(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0E7290(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0DA280(o, c);
}
