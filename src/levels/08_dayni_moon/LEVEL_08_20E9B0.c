/* LEVEL_08:0x20E9B0 -- placement copy of LEVEL_04_1E6DE0.c: initializes a status block, first running a one-time setup helper when a global flag is clear. */

struct Blk {
    char pad_00[0x20];
    int w_20;
    char pad_24[0x28 - 0x24];
    unsigned char b_28;
    unsigned char b_29;
};

extern unsigned char D_00252A70;
extern char D_003EB448[];
extern char D_00252A78[];
extern int D_00252A6C;

void func_082A78(char *a0, char *a1);

void func_20E9B0(struct Blk *a0)
{
    if (D_00252A70 == 0) {
        func_082A78(D_003EB448, D_00252A78);
        D_00252A70 = 1;
    }
    a0->b_28 = 0;
    a0->b_29 = 3;
    a0->w_20 = 0;
    D_00252A6C = 0;
}
