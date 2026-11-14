/* LEVEL_16:0x17AA00 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_001BE368;
extern int func_108008(int a, int b);

int func_17AA00(void)
{
    if (D_001BE368.handle <= 0)
        D_001BE368.handle = func_108008(0x3D, 8);
    return 1;
}
