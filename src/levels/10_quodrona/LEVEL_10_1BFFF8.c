/* LEVEL_10:0x1BFFF8 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_00211C00;
extern int func_129028(int a, int b);

int func_1BFFF8(void)
{
    if (D_00211C00.handle <= 0)
        D_00211C00.handle = func_129028(0x3D, 8);
    return 1;
}
