/* LEVEL_04:0x0F6BE8 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_0A4D30(struct Rec0EF6B0 *o, int a);
int func_0EBA48(int a);
int func_104038(int a);
int func_100FF0(int a);
int func_105D88(int a);
void func_0F6458(struct Rec0EF6B0 *o, int *c);

void func_0F6BE8(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_0A4D30(o, y);
    o->w_2C = x;
    o->w_1C = func_0EBA48(c[0]);
    o->w_20 = func_104038(c[1]);
    o->w_24 = func_100FF0(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_105D88(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0F6458(o, c);
}
