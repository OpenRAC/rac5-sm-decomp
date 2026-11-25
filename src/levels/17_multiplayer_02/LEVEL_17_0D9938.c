/* LEVEL_17:0x0D9938 -- placement copy of LEVEL_01_0EF6B0.c: stores a value and a table of four helper results into a record, then runs a finishing helper. */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void func_08E2F8(struct Rec0EF6B0 *o, int a);
int func_0D4AF8(int a);
int func_0E4B38(int a);
int func_0E3240(int a);
int func_0E61B8(int a);
void func_0D91A8(struct Rec0EF6B0 *o, int *c);

void func_0D9938(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_08E2F8(o, y);
    o->w_2C = x;
    o->w_1C = func_0D4AF8(c[0]);
    o->w_20 = func_0E4B38(c[1]);
    o->w_24 = func_0E3240(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0E61B8(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0D91A8(o, c);
}
