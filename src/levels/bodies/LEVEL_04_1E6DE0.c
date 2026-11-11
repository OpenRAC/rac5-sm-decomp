/* LEVEL_04:0x1E6DE0 -- initializes a status block, first running a one-time setup helper when a global flag is clear. */

struct Blk {
    char pad_00[0x20];
    int w_20;
    char pad_24[0x28 - 0x24];
    unsigned char b_28;
    unsigned char b_29;
};

extern unsigned char D_00222870;
extern char D_003B3EF0[];
extern char D_00222878[];
extern int D_0022286C;

void func_07DEF8(char *a0, char *a1);

void func_1E6DE0(struct Blk *a0)
{
    if (D_00222870 == 0) {
        func_07DEF8(D_003B3EF0, D_00222878);
        D_00222870 = 1;
    }
    a0->b_28 = 0;
    a0->b_29 = 3;
    a0->w_20 = 0;
    D_0022286C = 0;
}
