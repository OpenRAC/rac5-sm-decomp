/* LEVEL_07:0x0F04B0 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_0A1AF8(struct Rec0EF6B0 *o, int a);
int func_0E76B0(int a);
int func_0FD900(int a);
int func_0FA8B8(int a);
int func_0FF650(int a);
void func_0EFD20(struct Rec0EF6B0 *o, int *c);

void func_0F04B0(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_0A1AF8(o, y);
    o->w_2C = x;
    o->w_1C = func_0E76B0(c[0]);
    o->w_20 = func_0FD900(c[1]);
    o->w_24 = func_0FA8B8(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0FF650(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0EFD20(o, c);
}
